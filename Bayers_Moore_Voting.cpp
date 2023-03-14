#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count_1 = 0 , count_2 = 0 ;
    int Num_1 = -1,Num_2 = -1;
    for(int i=0;i<n;i++){
        if(arr[i]== Num_1){
            count_1++;
        }
        else if(arr[i]==Num_2){
            count_2++;
        }
        else if(count_1 == 0){
            Num_1 = arr[i];
        }
        else if(count_2 == 0){
            Num_2 = arr[i];
        }
        else{
            count_1--;
            count_2--;
        }
    }
    cout<<Num_1<<endl;
    cout<<Num_2<<endl;
}