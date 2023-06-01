#include <iostream>
#include <algorithm>
using namespace std;
struct Process
{
	int id, at, bt, pr, ft;
	float tat, wt;
};
Process p[10];
int Input()
{
	int n;
	cout << "Enter the Number of Process.. : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter the Arrival Time and Burst Time and Priority for " << i << ": ";
		cin >> p[i].at >> p[i].bt >> p[i].pr;
		p[i].id = i;
	}
	return n;
}
bool Compare(Process p1, Process p2)
{
	if (p1.pr < p2.pr)
	{
		return true;
	}
	return false;
}

int main()
{
	int n = Input();
	sort(p + 2, p + n + 1, Compare);
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			p[i].ft = p[i].bt + p[i].at;
			p[i].tat = p[i].ft - p[i].at;
			p[i].wt = p[i].tat - p[i].bt;
		}
		else
		{
			p[i].ft = p[i-1].ft + p[i].bt;
			p[i].tat = p[i].ft - p[i].at;
			p[i].wt = p[i].tat - p[i].bt;
		}
	}
	cout << "\nProcess\tAT\tBT\tPT\tFT\tTAT\tWT" << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << p[i].id << "\t" << p[i].at << "\t" << p[i].bt << "\t" << p[i].pr << "\t" << p[i].ft << "\t" << p[i].tat << "\t" << p[i].wt << endl;
	}
}
