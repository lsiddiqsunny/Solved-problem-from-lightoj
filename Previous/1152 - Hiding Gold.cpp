#include <bits/stdc++.h>
const int N = 25;
int gold[N * N], g[N*N][N*N], left[N * N];
char map[N][N];
int n, m, cnt, cas = 1;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool vis[N * N];
void init() {
    scanf("%d%d", &n, &m);
    memset(gold, 0, sizeof(gold));
    cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", map[i]);
        for (int j = 0; j < m; j++)
            if (map[i][j] == '*')
                gold[i * 20 + j] = ++cnt;
    }
    memset(g, 0, sizeof(g));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)  {
            if (map[i][j] == '*') {
                for (int k = 0; k < 4; k++) {
                    int x = i + dir[k][0];
                    int y = j + dir[k][1];
                    if (x < 0 || y < 0 || x >= n || y >= m || map[x][y] == 'o') continue;
                    g[gold[i * 20 + j]][gold[x * 20 + y]] = true;
                    g[gold[x * 20 + y]][gold[i * 20 + j]] = true;
                }
            }
        }
}
bool dfs(int u) {
    for (int i = 1; i <= cnt; i++) {
        if (g[u][i] && !vis[i]) {
            vis[i] = true;
            if (!left[i] || dfs(left[i])) {
                left[i] = u;
                return true;
            }
        }
    }
    return false;
}
void solve() {
    memset(left, 0, sizeof(left));
    int ans = 0;
    for (int i = 1; i <= cnt; i++) {
        memset(vis, 0, sizeof(vis));
        if (dfs(i)) ans++;
    }
      printf("Case %d: %d\n", cas++, cnt - ans / 2);
}
int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        init();
        solve();
    }
    return 0;
}
