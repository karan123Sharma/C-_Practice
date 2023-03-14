#include <iostream>
using namespace std;
// void Selection_Sort(int arr[], int a)
// {
//     int i,j,min;
//     for ( i = 0; i < a; i++)
//     {
//      min = i;
//         for (j = i + 1; i < a; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//      swap(arr[i], arr[min]);
//     }
// }
void Display(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " -> ";
    }
    cout << "NULL";
}
void Bubble_Sort(int arr[],int a){
    for(int i=0;i<a-1;i++){
        for(int j=0 ;j<a-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
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
    // Selection_Sort(arr, a);
    Bubble_Sort(arr,a);
    Display(arr, a);

}