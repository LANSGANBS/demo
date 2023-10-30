#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
/*
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize(3)
*/
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
    long double n = 0, m = 0, ans = 0;
    cin >> n >> m;
    if (n == 1)
        cout << setprecision(2) << fixed << m / n << endl;

    if (n == 2)
        cout << setprecision(2) << fixed << m / n << endl;

    if (n == 3)
    {
        ans += m / 3 + (1 - m / 3) * (1 - m / 2);
        cout << setprecision(2) << fixed << ans << endl;
    }

    if (n == 4)
    {
        ans += m / 4 + (1 - m / 4) * (1 - m / 3) * (m / 2);
        cout << setprecision(2) << fixed << ans << endl;
    }

    if (n == 5)
    {
        ans += m / n + (1 - m / 5) * (1 - m / 4) * (m / 3) + (1 - m / 5) * (1 - m / 4) * (1 - m / 3) * (1 - m / 2);
        cout << setprecision(2) << fixed << ans << endl;
    }
}
int main()
{
    buff;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
