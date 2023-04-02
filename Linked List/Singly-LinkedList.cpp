#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
void InsertAtHead(Node * &head,int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
    }
void PrintList(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}    
int main(){
    Node *newnode=new Node(10);
    Node *head = newnode;
    InsertAtHead(head,34);
    InsertAtHead(head,3);
    InsertAtHead(head,40);
    PrintList(head);

;}