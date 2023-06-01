#include <iostream>
#include<vector>
using namespace std;
int main()
{
    // //Ceaser Cypher
    // string str = "mitadt";
    // string enc="";
    // string dec="";
    // int key = 4;
    // //Encryption
    // for(int i=0;i<6;i++){
    //     enc+=(str[i]-'a' + key )%26 + 'a';
    // }
    // cout<<enc<<endl;
    // //Decryption
    // for(int i=0;i<6;i++){
    //     dec+=((enc[i]-'a') - key ) % 26 + 'a';
    // }
    // cout<<dec;

    // Mono Alphabetic
    //  string str = "mitadt";
    //  string enc ="";
    //  for(int i=0;i<6;i++){
    //      enc+=((str[i]-'a') + 3 )% 26 + 'a';
    //  }
    //  cout<<enc;

    // POLYaLPHABATIC
    //  string str = "wearediscoveredsaveyourself";
    //  string key = "deceptive";
    //  for(int i=0;i<str.size();i++){
    //      key+=key[i];
    //  }
    //  string enc="";
    //  for(int i=0;i<str.size();i++){
    //      enc+=((str[i] - 97) + (key[i] - 97 ))% 26 + 97;
    //  }
    //  cout<<enc<<endl;
    //  string dec ="";
    //  for(int i=0;i<str.size();i++){
    //      dec+=((enc[i] - key[i])+ 26 )% 26 + 'a';
    //  }
    //  cout<<dec;

    // Rail Fencing;

    string str = "helloworld";
    int depth = 4;
    vector<vector<char> > a(depth,vector<char> (str.size(),''));
}