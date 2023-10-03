#include <iostream>
using namespace std;
class Animal{
public:
    int age;
    int weight;
    void speak()
    {
        cout << "Speak" << endl;
    }
};
class Dog : public Animal{
    public:
        string Bark;
};
class GermanSpheperd:public Dog{
    public:
      string Breed;

};
int main(){
    GermanSpheperd marky;
    marky.speak();
}