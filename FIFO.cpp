#include <iostream>
#include <queue>
using namespace std;
const int N = 10005;
int pages[N];
int framesize = 4;
int mark[N];
void FIFO(int n)
{
    int pagefault =0;
    queue<int> Q;
    for (int i = 0; i < n; i++)
    {
        if (mark[pages[i]] == true)
        { 
            cout<<"Reference to page "<<pages[i]<<" didnt Caused a page fault"<<endl;
        }
        else{
            mark[pages[i]]=true;
            Q.push(pages[i]);
            if(Q.size()> framesize){
                int p = Q.front();
                mark[p]=false;
                Q.pop();
            }
        pagefault++;
        cout<<"Reference to page "<<pages[i]<<" caused a page fault\n";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }
    FIFO(n);
}