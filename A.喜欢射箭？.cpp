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
    int enemy_num, r;
    int x[305], y[305];
    cin >> enemy_num >> r;
    for (int i = 0; i < enemy_num; i++)
    {
        cin >> x[i] >> y[i];
    }

    int ans = 0;
    for (int tx = -150; tx <= 150; tx++)
    {
        for (int ty = -150; ty <= 150; ty++)
        {
            int cnt = 0;
            for (int i = 0; i < enemy_num; i++)
            {
                int dis = abs(tx - x[i]) * abs(tx - x[i]) + abs(ty - y[i]) * abs(ty - y[i]);
                if (dis <= r * r)
                    cnt += 1;
            }
            if (cnt > ans)
                ans = cnt;
            if (ans == enemy_num)
            {
                tx = 160;
                ty = 160;
            }
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
