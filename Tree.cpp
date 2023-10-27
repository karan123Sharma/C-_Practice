// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class TreeNode{
    public:
     int data;
     TreeNode *right;
     TreeNode *left;
     TreeNode(int val){
         this->data = val;
         this->left = NULL;
         this->right = NULL;
     }
};
TreeNode *Create_Node(int data){
    TreeNode *node = new TreeNode(data);
    return node;
}
void InsertNode(TreeNode * &node){
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    node->data = data;
    if(data == -1){
        return;
    }
    InsertNode(node->left);
    InsertNode(node->right);
}
int main() {
    TreeNode *Temp = Create_Node(1);
    InsertNode(Temp);
}