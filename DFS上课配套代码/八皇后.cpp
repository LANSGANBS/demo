#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int t, n, m;
int mp[20][20];
int col[20];
ll sum = 0;
// 我们是按行遍历的，所以每行确定只有一个，每列的情况用col数组记录，也已经确定好
// 这里只要考虑对角线上有没有棋子就行，有就剪枝剪掉
bool check(int x, int y) {
	ll x1 = x, y1 = y;
	while (x1 <= n && y1 <= n) {
		if (mp[x1][y1]) return false;
		x1++;
		y1++;
	}
	x1 = x, y1 = y;
	while (x1 >= 1 && y1 >= 1) {
		if (mp[x1][y1]) return false;
		x1--;
		y1--;
	}
	x1 = x, y1 = y;
	while (x1 >= 1 && y1 <= n) {
		if (mp[x1][y1]) return false;
		x1--;
		y1++;
	}
	x1 = x, y1 = y;
	while (x1 <= n && y1 >= 1) {
		if (mp[x1][y1]) return false;
		x1++;
		y1--;
	}
	return true;
}
void pt() {
	vll ans;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (mp[i][j] == 1) {
				ans.push_back(j);
				break;
			}
		}
	}
	for (auto &itt : ans) printf("%lld ", itt);
	puts("");
}
void dfs(int x) {
	if (x == n + 1) {
		sum++;
		// 前三个解就输出
		if (sum <= 3) {
			pt();
		}
	}
	for (int i = 1; i <= n; i++) {
		if (col[i] == 1) continue;
		if (!check(x, i)) continue; // 剪枝
		col[i] = 1;
		mp[x][i] = 1;
		dfs(x + 1);
		col[i] = 0;
		mp[x][i] = 0;
	}
}

int main() {
	cin >> n;
	dfs(1);
	printf("%lld\n", sum);
	return 0;
}
