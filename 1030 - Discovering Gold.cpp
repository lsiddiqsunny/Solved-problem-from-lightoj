#include <bits/stdc++.h>
using namespace std;
#define N 5000
int main()
{
    int T,iCase=1;
    int n,a[N];
    double dp[N];
    cin>>T;
    while(T--)
    {
        cin>>n;
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=n;i>=1;i--)
        {
            dp[i]=a[i];
            double t=0;
            int d=min(6,n-i);
            if(d<=0) continue;
            for(int j=1;j<=d;j++)
            {
                t+=dp[i+j];
            }
            dp[i]+=t/d;
        }
        printf("Case %d: ",iCase++);
        printf("%.10f\n",dp[1]);
    }
    return 0;
}
