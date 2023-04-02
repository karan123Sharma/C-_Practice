#include <iostream>
#include<unordered_set>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    string str;
	    cin>>str;
	    string final="";
	    unordered_set<char>s;
	    for(int i=0;i<str.size();i++){
	        s.insert(str[i]);
	    }
	    for(auto i:s){
	        final+=i;
	    }
	    reverseStr(final);
	    cout<<final<<endl;
	}
	return 0;
}
