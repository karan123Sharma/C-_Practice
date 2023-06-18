#include <iostream>
using namespace std;
class Node
{
public:
    int dat;
    Node *next;
    Node(int data)
    {
        this->dat = data;
        this->next = NULL;
    }
};
// struct Node1{
//     int data;
//     Node1 *next;
// }
void Insert_at_first(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode
}
void Display(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->dat<<" ";
        temp = temp->next;
    }
}
void Insert_at_end(Node *&head,int val){
    Node *temp = head;
    Node * newnode = new Node(val);
    while(temp != NULL){
        // cout<<temp->dat<<" "<<temp->next<<"-> ";
        temp = temp->next;
        if(temp->next == NULL){
            temp->next = newnode;
            break;
        }
    }
}
void insert_at_middle(Node *&head,int val,int pos){
    Node *newnode = new Node(val);
    Node *temp = head;
    int count =0;
    while(count !=pos-1){
        // cout<<temp->dat<<" ";
        temp = temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
int main()
{
    Node *n = new Node(3);
    Node *head = n;
    Insert_at_first(head,5);
    Insert_at_first(head,56);
    Insert_at_first(head,53);
    Insert_at_first(head,51);
    Insert_at_end(head,6);
    Insert_at_end(head,7);
    Insert_at_end(head,8);
    insert_at_middle(head,34,3);
    Display(head);
}