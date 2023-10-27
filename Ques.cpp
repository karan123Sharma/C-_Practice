#include<iostream>
using namespace std;
int EndCom(string str1){
    string date1;
    string date2;
    for(int i=0;i<str1.size();i++){
        if(str1[i] == '-'){
            i = i+ 4;            
            for(int j= i;j<i+4;j++){
                date1+=str1[j];
            }
            i = i+4;
            for(;i<str1.size();i++){
                if(str1[i] == '-'){
                    i = i+ 4;            
                    for(int j= i;j<i+4;j++){
                        date2+=str1[j];
                    }
                    break;
                }
            }            
            break;
        }
    }
    // cout<<date1<<" "<<date2;
    return stoi(date2) - stoi(date1);
}
int main(){
    string str1;
    int ans = EndCom("Hey this is smallest 17-04-1985,now we will see 18-09-1999");
    cout<<ans;
}