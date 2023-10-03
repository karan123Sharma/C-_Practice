#include <iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int val){
        this->data =  val;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode* BuildTree(TreeNode *root){
    int data;
    cout<<"Enter the Data : "<<" ";
    cin>>data;
    root = new TreeNode(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Inserting in Left  of : "<<data<<endl;
    root->left = BuildTree(root->left);
    cout<<"Inserting in Right of : "<<data<<endl;
    root->right = BuildTree(root->right);
    return root;
}
int main(){
    TreeNode *root = NULL;
    root =  BuildTree(root);
    return 0;
}