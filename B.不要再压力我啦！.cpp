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
const int N = 5e4 + 7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    pll a[N];
    ll sum[N];
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].second >> a[i].first;
        }
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + a[i].second;
        }
        ll ans = -2e9;
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, sum[i] - a[i].first);
        }
        cout << ans << endl;
    }
}