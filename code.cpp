#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    string str,A,B;
	    cin>>str;
	    for(int i=0;i<str.size();i++){
	        A+=str[i];
            cout<<A<<" ";
	        str.erase(str[i]);
            cout<<str;
	        // B+=str[i+1];
            // str.erase(str[i+1]);
	       }
	       cout<<A<<"   "<<B<<endl;
	}
	return 0;
}