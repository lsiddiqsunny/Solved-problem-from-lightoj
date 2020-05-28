#include <bits/stdc++.h>

using namespace std;
long long a[1000005];
long long seg1[1000005];
long long seg2[1000005];
int main()
{
    int test;
    cin >> test;
    for (int cs = 1; cs <= test; cs++)
    {
        memset(a, 0, sizeof(a));
        memset(seg1, 0, sizeof(seg1));
        memset(seg2, 0, sizeof(seg2));
        int n;
        long long w;
        cin >> n >> w;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos = n / 2;
        int rem = n - pos;
        int x1 = 1 << pos;
        int x2 = 1 << rem;
        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < pos; j++)
            {
                if (i & (1 << j))
                {
                    seg1[i] += a[j];
                }
            }
        }
        for (int i = 0; i < x2; i++)
        {
            for (int j = 0; j < rem; j++)
            {
                if (i & (1 << j))
                {
                    seg2[i] += a[pos + j];
                }
            }
        }
        sort(seg2, seg2 + x2);
        long long ans = 0;
        for (int i = 0; i < x1; i++)
        {
            if (w - seg1[i] >= 0)
            {
                ans += upper_bound(seg2, seg2 + x2, w - seg1[i]) - seg2;
            }
        }
        cout << "Case " << cs << ": " << ans << endl;
    }
}