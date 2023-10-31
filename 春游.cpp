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
    int n, m;
    cin >> n >> m;
    vector<int> arrived(n, 0);
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        arrived[a] = 1;
    }
    bool allArrived = true;
    for (int i = 0; i < n; i++)
    {
        if (arrived[i] == 0)
        {
            cout << i << " ";
            allArrived = false;
        }
    }
    if (allArrived)
    {
        cout << n;
    }
    cout << endl;
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