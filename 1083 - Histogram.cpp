#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        long long  int n;
        scanf("%lld",&n);
        long long int a[n];
        for(int j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
          }
        long long int x=0,y=0,maxi=0;
        for(int j=0; j<n; j++)
        {
            x=1;
            y=0;
              for(int k=j+1; k<n; k++)
            {
                if(a[j]<=a[k]) x++;
                else break;
            }
            for(int k=j-1; k>=0; k--)
            {
                if(a[j]<=a[k]) y++;
                else break;
            }
              if((a[j]*(x+y))>maxi)
            {//cout<<a[j]*(x+y)<<endl;
                maxi=a[j]*(x+y);
            }
            }
          //cout<<x+y<<endl;
        printf("Case %d: %lld\n",i,maxi);
      }
}
 
