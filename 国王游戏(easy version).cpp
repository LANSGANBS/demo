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
constexpr int N = 1e3 + 7;

struct people
{
    ll x, y;
    bool operator<(const people &a) const
    {
        return x * y < a.x * a.y;
    }
} a[N];

ll n;

void solve()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    ll ans = 0, now = a[0].x;
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, now / a[i].y);
        now *= a[i].x;
    }
    cout << ans << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    while (T--)
    {
        solve();
    }
    return 0;
}