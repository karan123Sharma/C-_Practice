#include<iostream>
using namespace std;
int maze(int r,int c){
    if(r==1 || c ==1 ){
        return 1;
    }
    int left = maze(r-1,c);
    int right = maze(r,c-1);
    return left + right;
}
void mazepath(string p,int r,int c){
    if(r==1 && c== 1){
        cout<<p<<endl;
        return;
    }
    if( r > 1){
        mazepath(p+'V' ,r-1,c);
    }
    if(c > 1){
        mazepath(p+'H',r,c-1);
    }
    if(r > 1 && c > 1){
        mazepath(p+'D',r-1,c-1);
    }

}
int main(){
    // int num = maze(3,3);
    mazepath("",4,4);
    // cout<<num;
}