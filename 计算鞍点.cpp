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
const int N = 100 + 7;

void solve()
{
    int m, n;
    cin >> m >> n;
    int a[N][N];
    int rowMax[N], colMin[N];
    bool flag = false;
    for (int i = 0; i < m; i++)
    {
        rowMax[i] = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            rowMax[i] = max(rowMax[i], a[i][j]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        colMin[j] = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            colMin[j] = min(colMin[j], a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == rowMax[i] && a[i][j] == colMin[j])
            {
                cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
                flag = true;
            }
        }
    }
    if (!flag)
    {
        cout << "No" << endl;
    }
}

int main()
{
    buff;
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}