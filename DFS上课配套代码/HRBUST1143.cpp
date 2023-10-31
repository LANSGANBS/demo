#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
const ll MAXN = 2e3 + 9;
ll n, m, p1, p2;
ll mp[MAXN][MAXN], nx[10] = {0, 0, 1, -1}, ny[10] = {1, -1, 0, 0}, vis[MAXN][MAXN];
ll dfs(ll x, ll y) {
	vis[x][y] = 1;
	ll ans = 1;
	for(int i = 0; i <= 3; i++) {
		ll wx = x + nx[i], wy = y + ny[i];
		if(wx < 1 || wx > n || wy < 1 || wy > m || vis[wx][wy] == 1 ||mp[wx][wy] > mp[p1][p2]) continue;
		ans += dfs(wx, wy);
	}
	return ans;
}
void solve() {
	for(int i = 1; i <= n; i++) 
		for(int j = 1; j <= m; j++) 
			cin >> mp[i][j];
	cout << dfs(p1, p2) << endl;
}

int main()
{
	buff
	while(cin >> n >> m >> p1 >> p2) {
		for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) vis[i][j] = 0;
		solve();
	}
    return 0;
}




