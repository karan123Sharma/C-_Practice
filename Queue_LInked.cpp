#include<iostream>
using namespace std;
class Queue{
    public:
    int data;
    Queue *next;
    Queue(int val){
        this->data = val;
        this->next = NULL;
    }
};
void Push(int daata, Queue *&q){
    Queue * newnode = new Queue(daata);
    q->next = newnode;
    q = q->next;
}
// Queue *Create(){

//     Queue * newQueue = new Queue(val);
//     return newQueue;
// }
void Display(Queue * tempdisp){
    while(tempdisp){
        cout<<tempdisp->data<<" ";
        tempdisp = tempdisp->next;
    }
}
int main(){
    int value;
    cout<<"Enter the Value : ";
    cin>>value;
    Queue * Temp = new Queue(value);
    Queue *temp1 = Temp;
    Push(4,Temp);
    Push(5,Temp);
    Push(6,Temp);
    Push(7,Temp);
    Push(8,Temp);
    Push(9,Temp);
    Display(temp1);
   return 0;
}