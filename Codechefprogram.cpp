#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    cout << "Enter the Test case :: ";
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cout << "Enter the array length :: " << endl;
        cout << "Enter the Current position :: " << endl;
        cin >> a >> b;
        char arr[a];
        vector<int> final;
        final.push_back(b);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] == 'R')
            {
                b++;
                final.push_back(b);
            }
            else if (arr[i] == 'L')
            {
                b--;
                final.push_back(b);
            }
        }
        cout << final.size() << endl;
        for (int i = 0; i < final.size(); i++)
        {
            for(int j=1;j<final.size();j++){
                if(final.at(i)==final.at(j)){
                    final.pop_back(final.at(i));
                }
            }
        }
    }
    return 0;
}
