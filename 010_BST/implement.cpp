#include <bits/stdc++.h>
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
        return root;
    if (root->data > data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}
Node *takeInput(Node *&root)
{
    int data;
    while (cin >> data && data != -1)
        root = insert(root, data);
    return root;
}
int main()
{
    Node *root = NULL;
    root = takeInput(root);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    return 0;
}