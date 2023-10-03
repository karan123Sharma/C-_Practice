#include <iostream>
using namespace std;
void pattern_1(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_2(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_3(int a)
{
    for (int i = a; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_4(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern_5(int a)
{
    pattern_2(a);
    pattern_3(a - 1);
}
void pattern_6(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_7(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = a; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_8(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_9(int a)
{
    for (int i = a, m = 1; i > 0; i--, m++)
    {
        for (int j = 1; j < m; j++)
        {
            cout << "  ";
        }
        for (int k = i * 2 - 1; k >= 1; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_10(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void pattern_11(int a)
{
    for (int i = a, m = 0; i >= 0; i--, m++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "  ";
        }
        for (int j = i * 2 - 1; j >= 0; j--)
        {
            if (j % 2 != 0)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_12(int a)
{
    pattern_11(a);
    pattern_10(a);
}
void pattern_13(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            if (j == 0 || j == i * 2 - 1 - 1 || i == a)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_14(int a)
{
    for (int i = a, m = 0; i >= 1; i--, m++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "  ";
        }
        for (int j = (i * 2) - 1; j >= 1; j--)
        {
            if (j == 1 || j == (i * 2 - 1) || i == a)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_15(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            if (j == 0 || j == i * 2 - 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = a, m = 0; i >= 1; i--, m++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "  ";
        }
        for (int j = (i * 2) - 1; j >= 1; j--)
        {
            if (j == 1 || j == (i * 2 - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_16(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << "  ";
            }
            else if (j == 1 || j == i * 2 - 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << i - 1 << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_17(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << "  ";
        }
        for (int j = i; j > 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = a - 1, m = 1; i >= 1; i--, m++)
    {
        for (int j = 1; j <= m + 1; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern_20(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j < a; j++)
        {
            if (j == 1 || j == a - 1 || i == 1 || i == a)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_21(int a)
{
    int num = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}
void pattern_22(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
            }
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 != 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }
}
void pattern_26(int a)
{

    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern_28(int a)
{
    pattern_8(a);
    pattern_9(a);
}
void pattern_18(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > 0; j--)
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = a; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_19(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > 0; j--)
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = a; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_24(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j <= i && (j == 1 || j == i))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i || j == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > 0; j--)
        {
            if (j >= i && (j == 1 || j == a || j == i))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = a; j >= i; j--)
        {
            if (j == i || j == a)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_25(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j <= a; j++)
        {
            if (j == 0 || j == a || i == a || i == 1)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_29(int a)
{
    pattern_19(a);
}
void pattern_30(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << "  ";
        }
        for (int j = i; j > 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern_32(int a)
{
    for (int i = a, m = 1; i >= 1; i--, m++)
    {
        char s = i + 'A' - 1;
        for (int j = 0; j < m; j++)
        {
            char s1 = s + j;
            cout << s1 << " ";
        }
        cout << endl;
    }
}
void pattern_33(int a)
{
    char s = 'a';
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << s << " ";
            if (s >= 'a' && s <= 'z')
            {
                s++;
                s = s - 'a';
                s = s + 'A';
            }
            else if (s >= 'A' && s <= 'Z')
            {
                s++;
                s = s - 'A';
                s = s + 'a';
            }
        }
        cout << endl;
    }
}
void pattern_34(int a)
{
    for (int i = a; i >= 1; i--)
    {
        char s = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << s-- << " ";
        }
        cout << endl;
    }
}
void pattern_35(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j <= i)
            {

                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1, m = i; j <= i; j++, m--)
        {
            cout << m << " ";
        }
        cout << endl;
    }
}
void pattern_27(int a)
{
    int num = 1;
    int num2 = a * 5;
    for (int i = 1, m = a; i <= a; i++, m--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = a; j >= i; j--)
        {
            cout << num++ << " ";
        }
        num2 = num2 - m;
        int sum = num2;
        for (int j = a; j >= i; j--)
        {
            sum += 1;
            cout << sum << " ";
        }
        cout << endl;
    }
}
void pattern_23(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            if (j == 0 || j == i * 2 - 1 - 1 )
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            if (j == 0 || j == i * 2 - 1 - 1 )
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
// void pattern_31(int a){

// }
void pattern_36(int a){

    for (int i = 0; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "  ";
        }
        i!=0 ?cout<<"* ":cout<<"";
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "+ ";
        }
        cout<<"* ";
        cout << endl;
    }
        for (int i = a, m = 1; i > 0; i--, m++)
    {
        for (int j = 1; j < m; j++)
        {
            cout << "  ";
        }
        cout<<"* ";
        for (int k = i * 2 - 1; k >= 1; k--)
        {
            cout << "+ ";
        }
        cout<<"* ";
        cout << endl;
    }
    for(int j=0;j<a;j++){
        cout<<"  ";
    }
    cout<<"* ";
}
//void pattern_37(int a){
  //  for(int i=0;i<a*2-1;i++){
//        for(int )
  //  }
//}
int main()
{
    int a = 6;
    cout << endl;
     pattern_1(a);
     cout << endl;
    pattern_2(a);
     cout << endl;
    pattern_3(a);
     cout << endl;
     pattern_4(a);
     cout << endl;
     pattern_5(a);
     cout << endl;
     pattern_6(a);
     cout << endl;
    pattern_7(a);
     cout << endl;
     pattern_8(a);
     cout << endl;
    pattern_9(a);
     cout << endl;
     pattern_10(a);
     cout << endl;
     pattern_11(a);
     cout << endl;
    pattern_12(a);
     cout << endl;
     pattern_13(a);
     cout << endl;
     pattern_14(a);
     cout << endl;
     pattern_15(a);
     cout << endl;
     pattern_16(a); // Pascals Triangle
     cout << endl;
     pattern_17(a);
     cout << endl;
     pattern_18(a);
     cout << endl;
     pattern_19(a);
    cout << endl;
    pattern_20(a);
     cout << endl;
     pattern_21(a);
     cout << endl;
     pattern_22(a);
     cout << endl;
     pattern_23(a);
     cout << endl;
     pattern_24(a);
     cout << endl;
     pattern_25(a);
     cout << endl;
     pattern_26(a);
     cout << endl;
     pattern_27(a);
     cout << endl;
     pattern_28(a);
     cout << endl;
     pattern_29(a);
     cout << endl;
     pattern_30(a);
    cout << endl;
//     pattern_31(a); 
    cout << endl;
    pattern_32(a);
     cout << endl;
     pattern_33(a);
     cout << endl;
     pattern_34(a);
     cout << endl;
     pattern_35(a);
     cout << endl;
    pattern_36(a);
}
