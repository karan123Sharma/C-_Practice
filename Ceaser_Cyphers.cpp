#include <iostream>
using namespace std;
string Ceaser_Encrypt(string Str, int key)
{
    string Enc;
    for (int i = 0; i < Str.size(); i++)
    {
        Enc += (Str[i] - 'a' + key - 'a') % 26 + 'a';
    }
    return Enc;
}
string  Ceaser_Decryption(string Enc, int key)
{
    string Dec;
    for (int i = 0; i < Enc.size(); i++)
    {
        Dec += ((Enc[i] - 'a') - (key - 'a')) % 26 + 'a';
    }
    return Dec;
}
int main()
{
    string Str = "mitadt";
    cout<<"Text----"<<endl;
    cout<<"mitadt"<<endl;
    int key;
    cin >> key;
    cout<<"Encrypted----"<<endl;
    string Enc = Ceaser_Encrypt(Str,key);
    cout<<Enc<<endl;
    cout<<"Decrypted----"<<endl;
    string Dec = Ceaser_Decryption(Enc,key);
    cout<<Dec;
}