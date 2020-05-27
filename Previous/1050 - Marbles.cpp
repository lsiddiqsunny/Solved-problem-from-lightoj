#include<bits/stdc++.h>
using namespace std;
double dp[1010][1010];
int R, B;
void init()
{
    memset(dp, 0, sizeof(dp));
    for (int i = 0;i <= 500;i++)
        dp[0][i] = 1;
      for (int i = 1;i <= 500;i++)
        for (int j = 2;j <= 500;j++)
            dp[i][j] = (double)i / (i + j) * dp[i - 1][j - 1] + (double)j / (i + j) * dp[i][j - 2];
}
int main()
{
    init();
    int T;
    scanf("%d", &T);
    for (int t = 1;t <= T;t++)
    {
        scanf("%d %d", &R, &B);
        printf("Case %d: %.8lf\n", t, dp[R][B]);
    }
    return 0;
}
