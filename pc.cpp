#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int max;
    cout << "Enter the maximum buffer size : ";
    cin >> max;
    int n;
    vector<int> arr;
    while (n != 3)
    {
        cout << "-----------------------" << endl;
        cout << "\n1. Press 1 for Producer"
                "\n2. Press 2 for Consumer"
                "\n3. Press 3 for Exit"
             << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your Choice :  ";
        cin >> n;
        cout << "-----------------------" << endl;
        switch (n)
        {
        case 1:
            if (arr.size() == max)
            {
                cout << "-----------------------" << endl;
                cout << "Buffer Reached limit" << endl;
                cout << "-----------------------" << endl;
                break;
            }
            else
            {
                int num;
                cout << "Enter the Number to push : ";
                cin >> num;
                arr.push_back(num);
                break;
            }

        case 2:
            if (arr.size() == 0)
            {
                cout << "The Buffer is Empty"<<endl;
                cout << "-----------------------" << endl;
                break;
            }
            else
            {
                int num;
                cout << "Enter the number to consume : ";
                cin >> num;
                for (int i = 0; i < arr.size(); i++)
                {
                    if (arr[i] == num)
                    {
                        arr.erase(arr.begin() + i);
                        break;
                    }
                }
            }
            break;
        case 3:
            break;
        }
    }
}