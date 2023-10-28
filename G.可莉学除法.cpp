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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    if (x == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % x == 0)
        {
            int j = lower_bound(a.begin(), a.end(), a[i] / x) - a.begin();
            int k = upper_bound(a.begin(), a.end(), a[i] / x) - a.begin();
            ans += k - j;
        }
    }
    cout << ans << endl;
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