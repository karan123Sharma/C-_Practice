#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int find_q(int p)
{
    for (int i = 1; i < p; i++)
    {
        set<int> s;
        for (int j = 1; j < p; j++)
        {
            int number = pow(i, j);
            s.insert(number % p);
        }
        if (s.size() == p - 1)
        {
            return i;
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int p, X1, X2;
    cout << "Enter the Prime Number : ";
    for(int i=0;i<100;i++)
    {
        cin>>p;
        
        if(p%2!=0){
            p=p;
            break;
        }
        cout<<"Wrong Number "<<endl;
        cout<<"Write the Prime number :";
    }
    int q = find_q(p);
    cout << "The Alpha Generated : " << q << endl;
    cout << "Enter the Personal Key of First Person :: ";
    cin >> X1;
    cout << "Enter the Personal Key of Second Person :: ";
    cin >> X2;
    int num = pow(q, X1);
    int S1 = num % p;
    cout << "Enter the Encrypted Key for First : " << S1 << endl;
    num = pow(q, X2);
    int S2 = num % p;
    cout << "Enter the Encrypted Key for second : " << S2 << endl;
    num = pow(S2, X1);
    int Y1 = num % p;
    num = pow(S1, X2);
    int Y2 = num % p;
    if (Y1 == Y2)
    {
    cout << "Secret Key Generated for First Person : " << Y1 << endl;
    cout << "Secret Key Generated for Second Person : " << Y2 << endl;
    
    cout<<"As they both are same the secret key generated is "<<Y2<<endl;
    }
}
