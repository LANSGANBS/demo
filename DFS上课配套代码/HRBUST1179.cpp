#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
const ll MAXN = 2e3 + 9;
ll n, m;
ll mp[MAXN][MAXN], nx[10] = {0, 0, 1, -1}, ny[10] = {1, -1, 0, 0}, vis[MAXN][MAXN];
ll dfs(ll x, ll y) {
	if(vis[x][y] != 0) return vis[x][y];
	vis[x][y] = 1;
	ll ans = 0;
	for (int i = 0; i <= 3; i++) {
		ll wx = x + nx[i], wy = y + ny[i];
		if (wx < 1 || wx > n || wy < 1 || wy > m || mp[wx][wy] >= mp[x][y]) continue;
		ans = max(ans, dfs(wx, wy));
	}
	vis[x][y] = ans + 1;
	return vis[x][y];
}
void solve() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> mp[i][j];
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			ans = max(ans, dfs(i, j));
		}
	}
	cout << ans << endl;
}

int main() {
	buff
	while (cin >> n >> m) {
		for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) vis[i][j] = 0;
		solve();
	}
	return 0;
}

/*

3 3 
1 2 3
8 9 4
7 6 5

*/


