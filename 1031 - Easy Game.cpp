#include<bits/stdc++.h>
using namespace std;
#define mx 105
int a[mx],dp[mx][mx];
int solve(int l,int r)
{
    if(l>r) return 0;
    if(l==r) return a[l];
    if(dp[l][r]!=-1) return dp[l][r];
    int best=INT_MIN;
    int sum=0;
    for(int i=l;i<=r;i++){
        sum+=a[i];
        best=max(best,sum-solve(i+1,r));
    }
    sum=0;
    for(int i=r;i>=l;i--){
        sum+=a[i];
        best=max(best,sum-solve(l,i-1));
    }
    dp[l][r]=best;
    return dp[l][r];
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int cs=1; cs<=test; cs++)
    {
        memset(dp,-1,sizeof dp);
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++) scanf("%d",&a[i]);
      int ans=solve(0,n-1);
    printf("Case %d: %d\n",cs,ans);}
}
 
