#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int age;
    int weight;
};
class Male : public Human
{
public:
    string color;
    void Sleep()
    {
        cout << "Male Sleeping";
    }
};
int main()
{
    Male m1;
    m1.age = 10;
    cout<<m1.age<<" ";
}