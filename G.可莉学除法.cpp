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
map<ll, ll> q;

void solve()
{
    q.clear();
    ll n, x;
    ll ans = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        q[a] += 1;
    }
    if (x != 0 && x != 1)
    {
        for (map<ll, ll>::iterator it = q.begin(); it != q.end(); it++)
        {
            if (q.count((it->first) * x) && (it->first) != 0)
            {
                ans += q[(it->first) * x] * (it->second);
            }
        }
    }
    else if (x == 0)
    {
        ll all = 0;
        for (map<ll, ll>::iterator it = q.begin(); it != q.end(); it++)
        {
            all += it->second;
        }
        ans = q[0] * (all - q[0]);
    }
    else if (x == 1)
    {
        for (map<ll, ll>::iterator it = q.begin(); it != q.end(); it++)
        {
            if ((it->first) != 0)
                ans += ((it->second) - 1) * (it->second);
        }
    }
    cout << ans << "\n";
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