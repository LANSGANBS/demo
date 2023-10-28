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
int a0[CF], a1[CF];
void solve()
{
}
signed main()
{
    buff;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s = ' ' + s;
        int len = s.size();
        for (int i = 1; i <= len; ++i)
        {
            a1[i] = a1[i - 1];
            a0[i] = a0[i - 1];
            if (s[i] == '1')
                a1[i]++;
            if (s[i] == '0')
                a0[i]++;
        }
        int l = 0, r = len;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            bool flag = 0;
            for (int i = 1, j = 0; i <= len; ++i)
            {
                while (j < i && a0[i] - a0[j] > mid)
                    ++j;
                if (a1[len] - (a1[i] - a1[j]) <= mid)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << l << endl;
    }
}