#include<iostream>
using namespace  std;
class Hero{
    //Properties
    private:
        int passkey;
    public:
        char Name[100];
        int health;
        int Level;
        void setpasskey(int p){
            passkey = p;
        }
        int getpasskey(){
            return passkey;
        }   
    Hero(){
        this->health = 0;
        this->Level = 0;
    }   
};
int main(){
    Hero ramesh;
    Hero *suresh = new Hero;
    // suresh->health = 20;
    // suresh->Level = 30;
    cout<<suresh->health<<" ";
    // cout<<(*suresh).health<<" ";
    // ramesh.health = 10;
    // ramesh.Level = 30 ;
    // ramesh.setpasskey(225012);
    // int pass = ramesh.getpasskey();
    // // cout<<sizeof(h1)<<endl;
    // cout<<"Health is : "<<ramesh.health<<endl;
    // cout<<"Password  is : "<<pass<<endl;
} 