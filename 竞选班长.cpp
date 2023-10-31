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
    int num = 0;
    vll ticket(10);
    memset(ticket.data(), 0, sizeof(ticket));
    while (true)
    {
        cin >> num;
        if (num >= 0 && num < 5)
        {
            ++ticket[num];
        }
        else
        {
            break;
        }
    }
    cout << "0-" << ticket[0] << endl;
    cout << "1-" << ticket[1] << endl;
    cout << "2-" << ticket[2] << endl;
    cout << "3-" << ticket[3] << endl;
    cout << "4-" << ticket[4] << endl;
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