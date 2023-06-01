#include <iostream>
#include <queue>
using namespace std;
struct process
{
    int id, at, bt, ft;
    float wt, tat;
};
process p[10], p1[10];
queue<int> q1;
float num1=0,num2=0;
int accept()
{
    int i, n;
    cout << "Enter the Total Number of Process to Round Robin: ";
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter an Arrival Time of the Process to Round Robin P and Burst Time  " << i << ": ";
        cin >> p[i].at>>p[i].bt;
        p[i].id = i;
    }
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        p1[i] = p[i];
    }
    return n;
}
void logic(int n){
    int i=1,m,Q_t,val;
    val = p1[1].at;
    cin>>Q_t;
    for(i=1;i<=n && p1[i].at <= val ;i++){
        q1.push(p1[i].id);
    }
    while(!q1.empty()){
        m = q1.front();
        q1.pop();
        if(p1[m].bt >=Q_t){
            val = val+Q_t;
            p1[m].bt = p1[m].bt - Q_t;
        }
        else{
            val = val+ p1[m].bt;
            p1[m].bt =0;
        }
        while(i<=n && p1[i].at <=val){
            q1.push(p1[i].id);
            i++;
        }
        if(p1[m].bt > 0){
            q1.push(m);
        }
        else{
            p[m].ft = val;
        }
    }
}
void turnwait(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        p[i].tat = p[i].ft - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        num1+= p[i].tat;
        num2+= p[i].wt;
    }
     num1 =num1/ n;
    num2 = num2 / n;
}
void display(int n)
{
    int i;
    cout << "\nProcess\tAT\tBT\tFT\tTAT\tWT";
    for (i = 1; i <= n; i++)
    {
        cout << "\nP" << p[i].id << "\t" << p[i].at << "\t" << p[i].bt << "\t" << p[i].ft << "\t" << p[i].tat << "\t" << p[i].wt;
    }
    cout << endl;
    cout << "\nAverage Turn Around Time:" << num1;
    cout << "\nAverage Waiting Time:\n"<< num2;
}
int main()
{
    int i, n;
    n = accept();
    logic(n);
    turnwait(n);
    display(n);
    return 0;
}