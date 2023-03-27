#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    int arr[a];
	    int re[a];
        bool flag = true;
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
        for(int i=0;i<a;i++){
            if(arr[i]%arr[0]==0){
                re[i]=arr[i]/arr[0];
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag == 0){
            for(int i=0;i<a;i++){
                re[i]=arr[i];
            }
        }
        for(auto i:re){
            cout<<i<<" ";
        }
        cout<<endl;
	//     for(int i=0;i<a;i++){
	//         if(i>0){
	//            if(arr[i]%arr[0] == 0){
	//              re[i]= arr[0]/arr[i];
	//           }
	//           else{
	//               re[a] = arr[a];
	//               break;
	//           }
	//         }
	//     }
	//     for(int i=0;i<a;i++){
	//         cout<<re[i];
	//     }
	    
	}
	return 0;
}
