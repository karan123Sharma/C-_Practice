#include<iostream>
using namespace std;
class Node{
    public:
    int dat;
    Node *next;
    Node(int data){
        this->dat = data;
        this->next = NULL;
    }
};
int main(){
    Node * newnode = new Node(10);
    
    cout<<newnode->dat;
}