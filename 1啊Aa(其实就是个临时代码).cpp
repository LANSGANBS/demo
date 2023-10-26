#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpll;
const ll MAX_INT = 0x3f3f3f3f;
const ll MAX_LL = 0x3f3f3f3f3f3f3f3f;
const ll CF = 2e5 + 9;
const ll mod = 1e9 + 7;
void solve()
{
}
int main()
{
	buff;
	int n;
	cin >> n;
	for (int i = 1; i <= 2 * n + 1; i++)
	{
		int stars = i <= n + 1 ? i : 2 * n + 2 - i;
		for (int j = 0; j < n + 1 - stars; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < stars; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
