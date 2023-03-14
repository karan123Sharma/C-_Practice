#include <iostream>
using namespace std;
int main()
{
	// int t;
	// cin>>t;
	// while(t--){
	int a;
	cin >> a;
	string S;
	cin >> S;
	int c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
	for (int i = 0; i < a; i++)
	{
		for (int i = 0; i < S.length(); i++)
		{
			if (S[i] == 'c')
			{
				c++;
			}
			else if (S[i] == 'o')
			{
				o++;
			}
			else if (S[i] == 'd')
			{
				d++;
			}
			else if (S[i] == 'e')
			{
				e++;
			}
			else if (S[i] == 'h')
			{
				h++;
			}
			else if (S[i] == 'f')
			{
				f++;
			}
			// }
		}
	}

	int range = (c / 2);
	int count = 0;
	for (int i = 0; i < range; i++)
	{
		if (c <= 1 && o == 0 && d == 0 && e <= 1 && h == 0 && f == 0)
		{
			break;
		}
		else
		{
			c -= 2;
			e -= 2;
			o--;
			d--;
			h--;
			f--;
		}
		count++;
	}
	cout << count << endl;
}