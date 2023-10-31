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
ll arr[CF];

void solve()
{
    ll a, b, q, l, r;
    cin >> a >> b >> q;
    for (ll i = 0; i < a * b; ++i)
    {
        arr[i] = (i > 0 ? arr[i - 1] : 0) + (i % a % b != i % b % a);
    }
    while (q--)
    {
        cin >> l >> r;
        --l;
        cout << (r / (a * b)) * arr[a * b - 1] + arr[r % (a * b)] - ((l / (a * b)) * arr[a * b - 1] + arr[l % (a * b)]) << ' ';
    }
    cout << endl;
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