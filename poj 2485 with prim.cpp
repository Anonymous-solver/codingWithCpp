#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <vector>
#include <queue>
#define inf 65537
#define L 510
#define LL long long
using namespace std;

int T, n, d[L][L], a[L], ans, minx, temp;
bool vis[L];

int main() {
  freopen("2485.in", "r", stdin);
  freopen("2485.out", "w", stdout);
  scanf("%d", &T);
  while (T--) {
    memset(d, 65537, sizeof(d));
    memset(vis, false, sizeof(vis));
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) {
	scanf("%d", &d[i][j]);
	if (i == j) d[i][j] = 65537;
      }
    for (int i = 1; i < n; ++i) a[i] = d[0][i];
    ans = 0, vis[0] = true;
    for (int i = 1; i < n; ++i) {
      minx = 65537;
      for (int j = 0; j < n; ++j)
	if (!vis[j] && a[j] < minx) minx = a[j], temp = j;
      vis[temp] = true, ans = max(minx, ans);
      for (int j = 0; j < n; ++j)
	if (!vis[j] && d[j][temp] < a[j]) a[j] = d[j][temp];
    }
    printf("%d\n", ans);
  }
  return 0;
}
