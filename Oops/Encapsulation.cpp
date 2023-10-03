#include<iostream>
using namespace std;
class Student{
    private:
        string Name;
        int age;
        int height;
    public:
    int  getAge(){
        return this->age;
    }    
};
int main(){
    Student s1;
    s1.getAge();
}