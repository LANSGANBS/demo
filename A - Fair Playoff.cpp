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
    vector<int> s(4);
    for (int i = 0; i < 4; i++)
        cin >> s[i];
    int mx1 = max(s[0], s[1]), mx2 = max(s[2], s[3]);
    sort(s.begin(), s.end());
    if ((mx1 == s[2] || mx1 == s[3]) && (mx2 == s[2] || mx2 == s[3]))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    buff;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}