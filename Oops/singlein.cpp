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
int main(){
    Dog Marky;
    Marky.speak();
}