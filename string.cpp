#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a;
  cin>>a;
  int arr[a];
  for(int i=0;i<a;i++){
    cin>>arr[i];
  }
  sort(arr,arr+a);
  int target;
  cin>>target;
  int num1 =0;
  int num2 =0;
  for(int i=0;i<a;i=i+2){
    if(arr[i]+arr[i+1] == target ){
      num1 = arr[i];
      num2 = arr[i+1];
    }
  }
  cout<<num1<<" "<<num2;
  
}