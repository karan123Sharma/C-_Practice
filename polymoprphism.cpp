#include<iostream>
using namespace std;
class Poly{
    public:
     void function(int x){
        cout<<"First function : "<<x<<endl;
     }
     void function(double x){
        cout<<"Second function : "<<x<<endl;

     }
     void function(int x,int y){
        cout<<"Third  function : "<<x<<","<<y<<endl;
     }
     void function(int x,double y){
        cout<<"Third  function : "<<x<<","<<y<<endl;
     }
};
int main(){
    Poly obj1;
    obj1.function(1,3.1);
}