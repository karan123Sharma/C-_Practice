#include <iostream>
#include <queue>
using namespace std;
struct Process
{
	int id, at, bt, ft;
	float wt, tat;
};
Process p[10], p1[10];
queue<int> q1;
int Input()
{
	int n;
	cout << "Enter the Number of Process.. : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter the Arrival Time and Burst Time for  " << i << ": ";
		cin >> p[i].at >> p[i].bt;
		p[i].id = i;
	}
	for (int i = 1; i <= n; i++)
	{
		p1[i] = p[i];
	}
	return n;
}
void Logic(int n)
{
	int i = 1, m, Q_t, val;
	cout << "Enter the Quantum Time.. :";
	cin >> Q_t;
	val = p1[1].at;
	for (i = 1; i <= n && p1[i].at <= val; i++)
	{
		q1.push(p1[i].id);
	}
	while (!q1.empty())
	{
		m = q1.front();
		q1.pop();
		if (p1[m].bt >= Q_t)
		{
			val = val + Q_t;
			p1[m].bt -=Q_t;
		}
		else
		{
			val = val + p1[m].bt;
			p1[m].bt = 0;

		}
		while (i <= n && p1[i].at <= val)
		{
			q1.push(p1[i].id);
			i++;
		}
		if (p1[m].bt > 0)
		{
			q1.push(p[m].id);
		}
		else
		{
			p[m].ft = val;
		}
	}
}
void TurnWait(int n){
	for(int i=1;i<=n;i++){
		p[i].tat = p[i].ft - p[i].at;
		p[i].wt = p[i].tat - p[i].bt;
		p[0].tat = p[0].tat + p[i].tat;
		p[0].wt = p[0].wt + p[i].wt;
	}
	p[0].tat =p[0].tat /n;
	p[0].wt =p[0].wt /n;
}
void Display(int n){
	cout << "\nProcess\tAT\tBT\tFT\tTAT\tWT";
	for(int i=1;i<=n;i++){
		cout<<"\n"<<p[i].id<<"\t"<<p[i].at<<"\t"<<p[i].bt<<"\t"<<p[i].ft<<"\t"<<p[i].tat<<"\t"<<p[i].wt<<endl;
	}
	cout<<endl;
	cout<<p[0].tat;
	cout<<p[0].wt;
}
int main()
{
	int n = Input();
	Logic(n);
	TurnWait(n);
	Display(n);
}