using namespace std;
#include <bits/stdc++.h>
const long long mod = 1000000007;
const int MN = 1000 + 10;
long long fac[MN];
long long dp[MN][MN];
// nCr= n-1Cr+n-1Cr-1
long long comb(int n, int k) {
if (k == 0 || n == k) return 1;
if (dp[n][k] == -1)
    dp[n][k] = (comb(n - 1, k) + comb(n - 1, k - 1)) % mod;
return dp[n][k];
}
/*http://www.shafaetsplanet.com/planetestoding/?p=600*/
// finds how many permutations of a size-n set does not have any of the firts k elements
// in their correspondient position (kth position).
long long DP(int n, int k) {
long long ans = fac[n];
for (int i = 1; i <= k; ++i) {
    ans -= ((i & 1)? 1 : -1) * (comb(k, i) * fac[n - i]) % mod;
    ans = (ans + mod) % mod;
}
return ans;
}
void solve() {
}
int main() {
ios_base::sync_with_stdio(false);
int test;
cin >> test;
fac[0] = 1;
for (int i = 1; i < MN; ++i)
    fac[i] = (fac[i - 1] * i) % mod;
memset(dp, -1, sizeof dp);
    for (int cs = 1; cs <= test; cs++) {
    printf("Case %d: ", cs);
    int n, m, k;
    cin >> n >> m >> k;
      long long ans = (comb(m, k) * DP(n - k, m - k)) % mod;
    printf("%lld\n", ans);
}
return 0;
}
