#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data) : data(data), left(NULL), right(NULL) {}
};

void preorder(Node *root)
{
    if (root)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

Node *insert(Node *&root, int data)
{
    if (!root)
        return new Node(data);
    if (root->data == data)
        return root; // Duplicate values are not inserted
    if (root->data > data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

Node *takeInput(Node *&root)
{
    int data;
    cout << "Enter numbers to insert into the BST (-1 to end): ";
    while (cin >> data && data != -1)
        root = insert(root, data);
    return root;
}

Node *findMin(Node *root)
{
    Node *temp = root;
    while (temp->left)
        temp = temp->left;
    return temp;
}

Node *deletion(Node *&root, int data)
{
    if (!root)
        return NULL;

    if (data < root->data)
        root->left = deletion(root->left, data);

    else if (data > root->data)
        root->right = deletion(root->right, data);

    else
    {
        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        else if (!root->left)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (!root->right)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = takeInput(root);

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    int data;
    cout << "Enter numbers to delete from the BST (-1 to end): ";
    while (cin >> data && data != -1)
    {
        root = deletion(root, data);

        cout << "After deleting " << data << ":\n";
        cout << "Preorder traversal: ";
        preorder(root);
        cout << endl;

        cout << "Inorder traversal: ";
        inorder(root);
        cout << endl;

        cout << "Postorder traversal: ";
        postorder(root);
        cout << endl;
    }

    return 0;
}
