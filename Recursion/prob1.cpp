#include <iostream>
using namespace std;
int counter = 0;
void print1(string str, int n)
{
 
    print1(str,n);
    cout << str;
    if (counter == n)
    {
        return;
    }
       counter++;



}
int main()
{
    int n;
    cin >> n;
    string str = "Karan";
    print1(str, n);
}