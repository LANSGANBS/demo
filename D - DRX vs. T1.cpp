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
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int d = 0, t = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i] == 'D')
        {
            d++;
        }
        else if (s[i] == 'T')
        {
            t++;
        }
        if (d == 3)
        {
            cout << "DRX" << endl;
            return 0;
        }
        else if (t == 3)
        {
            cout << "T1" << endl;
            return 0;
        }
    }
}
