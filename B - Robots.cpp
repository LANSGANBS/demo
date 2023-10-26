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
    buff;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int da = n, xiao = m;
        char x[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> x[i][j];
                if (x[i][j] == 'R')
                {
                    da = min(da, i);
                    xiao = min(xiao, j);
                }
            }
        }
        if (x[da][xiao] == 'R')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}