#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myfile;
    myfile.open("xyz.txt");
    if(!myfile){
        cout<<"File not created";
    }
    else{
        cout << "File created successfully!";
        myfile << "Hello";
        
        ifstream fin("xyz.txt");
        myfile.close();
    }
}