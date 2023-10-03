#include <iostream>
using namespace std;
class Student{
    public:
    void Study(){
        cout<<"The boy is Studying"<<endl;
    }
};
class Good_Boy{
    public:
    void Hashumanity(){
        cout<<"The Boy Helped his Grandma"<<endl;
    }
};
class Human:public Student,public Good_Boy{
    public:
    void Walks(){
        cout<<"The Human Walks"<<endl;
    }
};
int main(){
    Studne;
}