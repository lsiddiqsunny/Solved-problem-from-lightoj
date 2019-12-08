#include<bits/stdc++.h>
using namespace std;
struct point
{
    double x,y;
    };
    int main()
{
int test;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        int n;
        cin>>n;
        point p[n];
        for(int i=0; i<n; ++i)
            cin>>p[i].x>>p[i].y;
          int ans = -1;
        for(int i=0; i<n; i++)
        {
            map<double,int> m;
            for(int j=i+1; j<n; j++)
            {
                m[((double)(p[i].x - p[j].x)/(double)(p[i].y - p[j].y))]++;
            }
            int tmp = -1;
            for(typeof (m).begin() x = (m).begin(); x!= (m).end(); x++)tmp = max(tmp,x->second);
            ans = max(ans,tmp);
        }
        ans++;
        if(n==1) ans=1;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
