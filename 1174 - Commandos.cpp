#include<bits/stdc++.h>
using  namespace std;
#define SIZE 105
int m[SIZE];
list<int>a[SIZE];
int time1[SIZE];
int time2[SIZE];
void bfs(int j,int *time)
{
      queue<int>q;
    q.push(j);
    time[j]=0;
    m[j]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(list<int>::iterator l=a[u].begin(); l!=a[u].end(); l++)
        {
            if(!m[*l])
            {
                m[*l]=1;
                time[*l]=time[u]+1;
                q.push(*l);
            }
          }
    }
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        int N,q;
        scanf("%d%d",&N,&q);
        int x,y;
        for(int j=0; j<SIZE; j++)
        {
            m[j]=0;
            time1[j]=0;
            time2[j]=0;
            a[j].clear();
        }
        for(int j=0; j<q; j++)
        {
            scanf("%d%d",&x,&y);
            a[x].push_back(y);
            a[y].push_back(x);
        }
          scanf("%d%d",&x,&y);
        bfs(x,time1);
        for(int j=0; j<SIZE; j++) m[j]=0;
        bfs(y,time2);
        int maxi=0;
        for(int j=0; j<SIZE; j++)
        {
            //cout<<time1[j]<<" "<<time2[j]<<endl;
            if(maxi<(time1[j]+time2[j])) maxi=time1[j]+time2[j];
        }
        cout<<"Case "<<i<<": "<<maxi<<endl;
    }
}
 
