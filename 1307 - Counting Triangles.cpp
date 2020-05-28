#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int main()
{
    int test;
    scanf("%d",&test);
    int n,q;
    for(int i=0; i<test; i++)
    {
        a.clear();
        scanf("%d",&n);
        int x;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x);
            a.push_back(x);
        }
        printf("Case %d: ",i+1);
        int y=0,z;
        sort(a.begin(),a.end());
        int ans=0;
        for(int j=0; j<a.size(); j++)
        {for(int k=j+1;k<a.size();k++){
          //  cout<<a[j]+a[j+1]<<endl;
             y = (lower_bound(a.begin(),a.end(), a[j]+a[k]) - a.begin());
          //  z = (int)(upper_bound(a.begin(),a.end(),  a[j]+a[j+1]) - a.begin());
            ans += max(0, y - k- 1);
        }
                }
         printf("%d\n", ans);
    }
}
 
