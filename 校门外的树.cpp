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

struct uv
{
    int start;
    int end;
};

bool compare(uv i1, uv i2)
{
    return i1.start < i2.start;
}

void solve()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int l, m;
    cin >> l >> m;
    uv uv[m];
    for (int i = 0; i < m; i++)
    {
        cin >> uv[i].start >> uv[i].end;
    }
    sort(uv, uv + m, compare);
    int trees[l + 1];
    for (int i = 0; i <= l; i++)
    {
        trees[i] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = uv[i].start; j <= uv[i].end; j++)
        {
            trees[j] = 0;
        }
    }
    int count = 0;
    for (int i = 0; i <= l; i++)
    {
        if (trees[i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T=1;
    while (T--)
    {
        solve();
    }
    return 0;
}
