#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
            cout<<matrix[i][j]<<" ";
        }
        cout << endl;
    }
}