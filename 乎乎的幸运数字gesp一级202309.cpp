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
    int n, l, r, ans = 0;
    cin >> n;
    cin >> l;
    cin >> r;
    for (int i = l; i <= r; i++)
    {
        if (i % 10 == n || i % n == 0)
            ans += i;
    }
    cout << ans << '\n';
}