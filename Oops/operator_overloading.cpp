#include<iostream>
using namespace std;
class A{
    public:
      void operator+ () {
        cout<<"Hello Buddy";
      }
};
int main(){
    A obj1;
    obj1.operator+();
}