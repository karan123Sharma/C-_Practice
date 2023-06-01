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
void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtEnd(Node * &tail,int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertatMiddle(Node *&head,Node *&tail,int d, int pos){
    Node *temp = head;
    // if(pos==1){
    //     InsertAtHead(head,d);
    //     return;
    // }
    int count = 1;
    while(count <  pos-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        InsertAtEnd(tail,d);
        return;
    }
    Node * newnode = new Node(d);
    newnode->next = temp->next;
    temp->next = newnode;
}
void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->dat << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *newNode = new Node(10);
    Node *head = newNode;
    Node *tail = newNode;
    InsertAtHead(head,89);
    InsertAtEnd(tail,90);
    InsertAtEnd(tail,10);
    InsertatMiddle(head,tail,12,1);
     
    printlist(head);

}