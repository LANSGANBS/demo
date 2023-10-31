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
    int N, M;
    cin >> N >> M;
    vector<int> book(M + 1, 0);
    vector<int> reader(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> reader[i];
        book[reader[i]]++;
    }
    for (int i = 1; i <= N; i++)
    {
        if (book[reader[i]] > 1)
        {
            cout << book[reader[i]] - 1 << endl;
        }
        else
        {
            cout << "BeiJu" << endl;
        }
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