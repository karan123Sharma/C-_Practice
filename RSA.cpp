#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int Select_e(int pos,int phi){
    int i=1,count=0;
    while(true){
        if(__gcd(i,phi)==1){
            count++;
            if(count == pos ){
                return i;
            }
        }
        i++;
    }
}
int RSA(int e,int n){
    int EncryptedTextNum;
    cout<<"Enter Plane Text Num : ";
    cin>>EncryptedTextNum;
    long long num = pow(EncryptedTextNum,e);
    int c = num %n;
    return c;
}
int Find_d(int phi,int e){
    int fix = phi;
    int i =0;
    while(true){
        i++;
        phi = fix;
        if(((phi*i)+1)%e ==0 ){
            return ((phi*i)+1)/e;
        }
    }
}
int Decryption(int d, int n,int c){
    long long  num = pow(c,d);
    cout<<num<<endl;
    int dec = num %n;
    // cout<<dec<<endl;
    return dec;
}
int main(){
    int p,q,pos;
    cin>>p>>q;
    int n = p*q;
    int phi=(p-1)*(q-1);
    cout<<"Enter Which e to select : ";
    cin>>pos;
    int e = Select_e(pos,phi);
    // cout<<e;
    int c = RSA(e,n);
    cout<<"Entecrpted Text : "<<c<<endl;
    int d = Find_d(phi,e);
    // cout<<d<<endl;
    int Decrypt = Decryption(d,n,c);
    cout<<"Decrypted Text : "<<Decrypt<<endl;
}
