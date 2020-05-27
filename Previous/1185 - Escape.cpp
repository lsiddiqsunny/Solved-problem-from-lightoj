#include<bits/stdc++.h>
using namespace std;
#define mx 105
vector<int >g[mx];
int vis[mx][2];
    void dfs(int s,int now){
    if(now!=-1){
        vis[s][now]=1;
    }
    if(now==-1){
        now=0;
    }
    else{
        now=1-now;
    }
    for(int i=0;i<g[s].size();i++){
            if(vis[g[s][i]][now]==0){
                dfs(g[s][i],now);
            }
    }
      }
    int main(){
int t;
scanf("%d",&t);
for(int cs=1;cs<=t;cs++){
      int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<=n;i++){
        g[i].clear();
    }
    memset(vis,0,sizeof(vis));
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
      }
    dfs(1,-1);
      int co=0;
    for(int i=1;i<=n;i++){
        if(vis[i][1]){
            co++;
        }
    }
      printf("Case %d: %d\n",cs,co);
          }
}
