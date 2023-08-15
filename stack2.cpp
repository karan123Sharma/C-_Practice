#include<iostream>
using namespace std;
class ListNode{
    public:
        int data;
        ListNode *next;
        ListNode(int val){
            this->data = val;
            this->next = NULL;
        }
};
void push(int num,ListNode *&list){
    ListNode *node = new ListNode(num);
    list->next = node;
    list = list->next;
}
void pop(ListNode *&list){
    ListNode *temp = list;
    ListNode *temp1 = list;
    ListNode *t = temp1;
    temp1 = temp1->next;
    while(temp1->next != NULL){
        temp1 = temp1->next;
        temp = temp->next;
    }
    temp1->next = temp->next;
    temp1->next = NULL;
    list = t;
}
// int top(){

// }
// bool isempty(){

// }
void Display(ListNode *list){
    while(list != NULL){
        cout<<list->data<<" ";
        list = list->next;
    }
}
ListNode *Create(){
    ListNode *newlist = new ListNode(-1);
    return newlist;
}
int main(){
    ListNode *newlist = Create();
    ListNode *temp = newlist;
    push(10,newlist);
    push(1,newlist);
    push(10,newlist);
    push(10,newlist);
    push(9,newlist);
    push(9,newlist);
    push(9,newlist);
    pop(temp);

    // pop(temp);
    // pop(temp);
    Display(temp->next);
}