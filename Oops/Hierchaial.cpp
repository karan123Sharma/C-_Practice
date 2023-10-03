#include <iostream>
using namespace std;
class Animal{
public:
    int age;
    int weight;
    void Walk()
    {
        cout << "Walks" << endl;
    }
};
class Dog : public Animal{
    public:
        void Barks()
        {
            cout << "Barks" << endl;
        }
};
class Cat : public Animal{
    public: 
       void Meows(){
        cout<<"Meows"<<endl;
       }
};
class Cute: public Cat{
    public:
       void Cutie(){
             cout<<"The Cat is a Cutie"<<endl;
       }
};
class Loyal: public Dog{
    public:
       void Loyalty(){
            cout<<"The Dog is Loyal "<<endl;
       }
};
int main(){
    Dog Marky;
    Marky.Barks();
    Loyal Mark;
    Mark.Loyalty();
}