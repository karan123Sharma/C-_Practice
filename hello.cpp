#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int element;
    cin>>element;
    int arr[]={2,4,5,6};
    int aar2[element * 2];
    for (int i = 0; i < element; i++)
    {
        aar2[i] = arr[i];
        cout<<aar2[i]<<" ";
        if (i == element-1)
        {
            for (int j = 0; j < element; j++)
            {
                aar2[j] = arr[j];
            }
        }
    }
    for(int i=0;i<element*2;i++){
        cout<<aar2[i]<<" ";
    }
}