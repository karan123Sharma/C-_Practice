#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void Insert_at_last(Node *&head,int data){
    Node *newnode = new Node(data);
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void Display(Node *&head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void Remove_dup(Node *&head){
    Node *temp = head;
    while(temp->next != NULL){
        if(temp->next->data != temp->data || ((temp->next->next == NULL) && (temp->data != temp->next->data))){
        cout<<temp->data<<" ";
        }
        temp= temp->next;
    }
}
int main(){
    Node *newnode = new Node(1);
    Node *head = newnode;
    Insert_at_last(head,1);
    Insert_at_last(head,1);
    Insert_at_last(head,2);
    Insert_at_last(head,2);
    Insert_at_last(head,3);
    Insert_at_last(head,4);
    Remove_dup(head);
    // Display(head);
}