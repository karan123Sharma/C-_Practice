#include <iostream>
using namespace std;
void Sort(int arr[], int a)
{
    int temp ;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    Sort(arr,a);

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " -> ";
    }
    cout<<"NULL"<<endl;
}