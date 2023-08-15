#include<iostream>
using namespace std;
int search(int arr[],int len,int index,int target){
    if(index == len-1){
        return -1;
    }
    if(target == arr[index]){
        return index;
    }
    return search(arr,len,index+1,target);
    
}
int reverse(int num,int i){
    if(num%10 == num){
        return num;
    }
    int res = num%10;
    // return reverse(num/10);
    return res * i + reverse(num/10,i/10);
}
void substr(string str1, string str){
    if(str == "" || str1 !=""){
        cout<<str1<<" ";
        return;
    }
    char s = str[0];
    substr(str1+ s,str.substr(1))   ;
    substr(str1,str.substr(1));
}
int main(){
    int arr[8]={3,2,6,7,99,13,4,21};
    // int len = sizeof(arr)/sizeof(arr[0]);
    // int target = 131;
    // int res = search(arr,len,0,target);
    substr("","abc");
    // int res = reverse(123456789,100000000);
    // cout<<res;
}