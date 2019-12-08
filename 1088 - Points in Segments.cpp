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
        scanf("%d%d",&n,&q);
        int x;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x);
            a.push_back(x);
        }
        printf("Case %d:\n",i+1);
        int y,z;
        for(int j=0; j<q; j++)
        {
            scanf("%d%d",&y,&z);
             y = (int)(lower_bound(a.begin(),a.end(), y) - a.begin());
            z = (int)(upper_bound(a.begin(),a.end(), z) - a.begin());
            printf("%d\n",z-y);
        }
    }
}
 
