#include <iostream>
using namespace std;
class Person{
	int age;
	int weight;
	int height;
   public:
     int getage(){
		return this->age;
	 } 
	 int setweight(){
		this->weight = weight;
	 }


};
class Male: public Person{
	public:
	string color;
	void walk(){
		cout<<"walking"<<endl;
	}
	  
};
int main() {

	return 0;
	}
