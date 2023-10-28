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
signed main()
{
    buff;
    int t;
    cin >> t;
    int a[CF];
    char str[CF];
    while (t--)
    {
        cin >> str + 1;
        int n = strlen(str + 1);
        int bad = 0;
        for (int i = 1; i <= n; i++)
        {
            a[i] = a[i - 1] + (str[i] == '0');
            if (str[i] == '1')
                bad++;
        }
        int ans = bad;
        for (int i = bad; i <= n; i++)
        {
            ans = min(ans, a[i] - a[i - bad]);
        }
        cout << ans << endl;
    }
}