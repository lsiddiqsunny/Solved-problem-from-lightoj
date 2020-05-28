#include<bits/stdc++.h>
using  namespace std;
#define SIZE 200005
int m[SIZE];
list<int>a[SIZE];
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        int n;
        scanf("%d",&n);
        int x,y;
        for(int j=0; j<SIZE; j++)
        {
            m[j]=0;
            a[j].clear();
        }
        for(int j=0; j<n; j++)
        {
            scanf("%d%d",&x,&y);
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int maxi=0;
        for(int j=0; j<SIZE; j++)
        {
            if(m[j]==0&&!a[j].empty())
            {
                int lay=0,vam=0;
                queue<int>q;
                q.push(j);
                m[j]=-1;
                vam++;
                while(!q.empty())
                {
                    int u=q.front();
                    q.pop();
                    for(list<int>::iterator l=a[u].begin(); l!=a[u].end(); l++)
                    {
                        if(m[*l]==0)
                        {
                            q.push(*l);
                            if(m[u]==-1)
                            {
                                m[*l]=1;
                                lay++;
                            }
                            else
                            {
                                m[*l]=-1;
                                vam++;
                            }
                        }
                    }
                }
                maxi+=max(vam,lay);
            }
            }
        printf("Case %d: %d\n",i,maxi);
      }
}
 
