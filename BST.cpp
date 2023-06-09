#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *InsertRoot(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = InsertRoot(root->left, val);
    }
    else
    {
        root->right = InsertRoot(root->right, val);
    }
    return root;
};
void inorder(Node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<< root->data <<" ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = InsertRoot(root,5);
    InsertRoot(root,3);
    InsertRoot(root,4);
    InsertRoot(root,1);
    InsertRoot(root,7);
    InsertRoot(root,2);

    inorder(root);
    cout<<endl;
    return 0;
}
