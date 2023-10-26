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
    string s;
    cin >> s;
    int N = s.size();
    vector<int> S(N+1);
    S[0] = 0;
    for (int j = 0; j < N; ++j)
    {
        S[j + 1] = S[j];
        if (s[j] == '0')
        {
            ++S[j+1];
        }
    }
    vector<int> num_1;
    for (int j = 0; j < N; ++j)
    {
        if (s[j] == '1')
        {
            num_1.push_back(j);
        }
    }
    int cnt = num_1.size();
    int ans = cnt, temp = -1;
    while (ans - temp > 1)
    {
        int mid = (ans + temp) / 2;
        bool flag = 0;
        for (int j = 0; j <= mid; ++j)
        {
            int l = num_1[j];
            int r = num_1[cnt - 1 - mid + j] + 1;
            if (S[r] - S[l] <= mid)
            {
                flag = 1;
            }
        }
        if (flag)
        {
            ans = mid;
        }
        else
        {
            temp = mid;
        }
    }
    cout << ans << endl;
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
}