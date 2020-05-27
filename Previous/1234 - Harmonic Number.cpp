#include<bits/stdc++.h>
using namespace std;
#define GAMA  0.57721566490
vector<double>ans;
int main()
{
    int test;
    cin>>test;
    double sum=0.0;
    for(int i=1; i<=1000000; i++)
    {
        sum+=(1/(i*1.0));
        ans.push_back(sum);
    }
    double ans2=0.0;
    for(int i=1; i<=test; i++)
    {
        int n;
        cin>>n;
        if(n <= 1000000)
        {
              printf("Case %d: %.9f\n", i, ans[n-1]);
        }
          else
        {
            double k = n + .5;
            ans2 = log(k) + GAMA;
            printf("Case %d: %.9f\n", i, ans2);
        }
    }
}
 
