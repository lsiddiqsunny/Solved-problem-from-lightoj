#include<bits/stdc++.h>
using namespace std;
#define MAX  30005
vector<pair<int,long long> > g[MAX];
int visited[MAX];
long long dist[MAX];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    dist[source]=0;
    visited[source]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<g[u].size(); i++)
        {
            int v=g[u][i].first;
            if(!visited[v])
            {
                visited[v]=1;
                q.push(v);
                dist[v]=dist[u]+g[u][i].second;
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
        for(int j=0; j<MAX; j++)
        {
            g[j].clear();
            visited[j]=0;
            dist[j]=0;
        }
        int n;
        scanf("%d",&n);
        int u,v;
        long long x;
        for(int j=1; j<n; j++)
        {
            scanf("%d%d%lld",&u,&v,&x);
            g[u].push_back(make_pair(v,x));
            g[v].push_back(make_pair(u,x));
        }
        bfs(0);
        int s=0;
        for(int j=0;j<n;j++){
            if(dist[s]<dist[j]) s=j;
            visited[j]=0;
        }
        bfs(s);
        printf("Case %d: %lld\n",i,*max_element(dist,dist+n));
      }
}
 
