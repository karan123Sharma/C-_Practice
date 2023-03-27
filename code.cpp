#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	// your code goes here
	int n = 555;
	int count = 0;
	vector<int> res;
	// Code here.
	while (n > 0)
	{
		int lastdigit = n % 10;
		res.push_back(lastdigit);
		n = n / 10;
	}
	vector<int> num = res;
	reverse(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] == num[i])
		{
			count++;
		}
	}
	if (count == num.size())
	{
	   cout<< "Yes";
	}
	else
	{
		cout<< "No";
	}
	return 0;
}