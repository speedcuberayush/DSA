#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insert(Node *&root, int element)
{
    if (!root)
    {
        Node *newNode = new Node(element);
        return newNode;
    }
    if (root->data > element)
        root->left = insert(root->left, element);
    else
        root->right = insert(root->right, element);
    return root;
}
void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preoder(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preoder(root->left);
    preoder(root->right);
}

void postoder(Node *root)
{
    if (!root)
        return;
    postoder(root->left);
    postoder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 10);
    root = insert(root, 60);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 100);
    root = insert(root, 40);
    root = insert(root, 80);
    root = insert(root, 70);
    root = insert(root, 90);

    inorder(root);
    cout << endl;
    preoder(root);
    cout << endl;
    postoder(root);
    cout << endl;
    levelOrder(root);
    return 0;
}