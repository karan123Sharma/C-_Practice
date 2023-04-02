#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void Print(Node *n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}
// Node *push(Node *head,int Newdata){
//     Node *NewNode = new Node();
//     NewNode->data = Newdata;
//     NewNode->next = head;
//     head = NewNode;
//     return head;
// }
// void push(Node **head_ref,int data){
//     Node *newNode =new Node();
//     newNode->data = data;
//     newNode->next = *head_ref;
//     *head_ref = newNode;
// }
int main(){ 
    // int x = 50;
    // int *ptr1 = &x;
    // int **ptr = &ptr1;
    // cout<<**ptr<<endl;
    int x = 70;
    int *ptr;
    ptr = &x;
    cout<<*ptr<<endl;


    // Node *second = new Node();
    // Node *third = new Node();

    // head->data = 5;
    // head->next = second;

    // second->data = 20;
    // second->next = third;

    // third->data = 70;
    // third->next= NULL;

}