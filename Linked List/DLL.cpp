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
void InsertAtMiddle(Node *&head,int d,int pos){
    Node * temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }
    Node * newnode = new Node(d);
    newnode->prev= temp;
    newnode->next = temp->next;
    temp->next = newnode;
    temp = temp->next;
    temp->prev = newnode;


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
    Insertatfirst(head,70);
    InsertAtLast(tail,89);
    InsertAtLast(tail,80);
    InsertAtLast(tail,10);
    InsertAtMiddle(head,56,3);
    InsertAtMiddle(head,59,3);
    InsertAtLast(tail,90);
    printlist(head);

}