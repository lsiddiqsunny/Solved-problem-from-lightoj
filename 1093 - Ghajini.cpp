#include <bits/stdc++.h>
using namespace std;
        int main()
{
      int test;
        scanf("%d", &test);
      for (int cs = 1; cs <= test; cs++)
    {
        int n;
        int d;
          scanf("%d", &n);
        scanf("%d", &d);
   int  x;
        int  ans=0;
        priority_queue  < pair<int, int>,   vector <pair < int, int> >, greater <pair < int, int> > > bigq;
        priority_queue <pair <int, int> > smallq;
          for (int i = 1; i <= n; i++)
        {
            cin >> x;
              bigq.push(make_pair(x, i));
            smallq.push(make_pair(x, i));
              while(!bigq.empty() && (i - bigq.top().second) >= d)
            {
                bigq.pop();
            }
              while(!smallq.empty()&& (i - smallq.top().second) >= d)
            {
                smallq.pop();
            }
              if(bigq.size() >= 2 and smallq.size() >= 2)
            {
                ans = max(ans, abs(bigq.top().first - smallq.top().first));
            }
          }
          printf("Case %d: %d\n", cs, ans);
      }
      }
 
