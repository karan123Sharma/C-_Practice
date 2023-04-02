#include<iostream>
using namespace std;
class Node{
    public:
    Node * prev;
    int data;
    Node * next;

    Node(int data){
        this->prev=NULL;
        this->data = data;
        this->next = NULL;
    }
};
void Insertatfirst(Node *&head,int d){
    Node * temp = new Node(d);
    temp->next = head;
    head = temp; 
}
void InsertAtLast(Node *&tail,int d){
    Node *temp = new Node(d);
    temp->prev = tail;
    tail->next = temp; 
    tail = temp;
}
void printlist(Node  *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
int main(){
    Node *newnode = new Node(3);
    Node *head = newnode;
    Node *tail = newnode;
    Insertatfirst(head,67);
    Insertatfirst(head,17);
    InsertAtLast(tail,89);
    InsertAtLast(tail,80);
    InsertAtLast(tail,10);
    printlist(head);

}