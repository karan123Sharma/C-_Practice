// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,b;
// 	    cin>>a>>b;
// 	    string s;
//         cin>>s;
//         if(s[0]=='0'){
//             s.insert('1',0);
//         }
// 	}
// 	return 0;
// }

// CPP code for insert (size_type idx, const string& str)

#include <iostream>
#include <string>

using namespace std;

// Function to demonstrate insert
void insertDemo(string str1, string str2)
{

	// Inserts str2 in str1 starting
	// from 6th index of str1
	str1.insert(6, str2);
	cout << "Using insert : ";
	cout << str1;
}

// Driver code
int main()
{
	string str1("Hello World! ");
	string str2("GeeksforGeeks ");

	cout << "Original String : " << str1 << endl;
	insertDemo(str1, str2);

	return 0;
}

