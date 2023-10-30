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
    int row, col, query;
    cin >> row >> col >> query;
    static int arr[1005][1005];
    static int ans[1005][1005];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            arr[i][j] = 1;
            ans[i][j] = 1;
        }
    }

    for (int q = 0; q < query; q++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        arr[x1][y1] *= -1;
        arr[x1][y2 + 1] *= -1;
        arr[x2 + 1][y1] *= -1;
        arr[x2 + 1][y2 + 1] *= -1;
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            ans[i][j] = ans[i - 1][j] * ans[i - 1][j - 1] * ans[i][j - 1] * arr[i][j];
        }
    }
    int res = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            res += ans[i][j];
        }
    }
    cout << res << endl;
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