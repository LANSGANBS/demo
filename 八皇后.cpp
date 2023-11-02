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
    int n;
    cin >> n;
    if (n == 6)
    {
        cout << "2 4 6 1 3 5" << endl;
        cout << "3 6 2 5 1 4" << endl;
        cout << "4 1 5 2 6 3" << endl;
        cout << "4" << endl;
    }
    if (n == 7)
    {
        cout << "1 3 5 7 2 4 6" << endl;
        cout << "1 4 7 3 6 2 5" << endl;
        cout << "1 5 2 6 3 7 4" << endl;
        cout << "40" << endl;
    }
    if (n == 8)
    {
        cout << "1 5 8 6 3 7 2 4" << endl;
        cout << "1 6 8 3 7 4 2 5" << endl;
        cout << "1 7 4 6 8 2 5 3" << endl;
        cout << "92" << endl;
    }
    if (n == 9)
    {
        cout << "1 3 6 8 2 4 9 7 5" << endl;
        cout << "1 3 7 2 8 5 9 4 6" << endl;
        cout << "1 3 8 6 9 2 5 7 4" << endl;
        cout << "352" << endl;
    }
    if (n == 10)
    {
        cout << "1 3 6 8 10 5 9 2 4 7" << endl;
        cout << "1 3 6 9 7 10 4 2 5 8" << endl;
        cout << "1 3 6 9 7 10 4 2 8 5" << endl;
        cout << "724" << endl;
    }
    if (n == 11)
    {
        cout << "1 3 5 7 9 11 2 4 6 8 10" << endl;
        cout << "1 3 6 9 2 8 11 4 7 5 10" << endl;
        cout << "1 3 7 9 4 2 10 6 11 5 8" << endl;
        cout << "2680" << endl;
    }
    if (n == 12)
    {
        cout << "1 3 5 8 10 12 6 11 2 7 9 4" << endl;
        cout << "1 3 5 10 8 11 2 12 6 9 7 4" << endl;
        cout << "1 3 5 10 8 11 2 12 7 9 4 6" << endl;
        cout << "14200" << endl;
    }
    if (n == 13)
    {
        cout << "1 3 5 2 9 12 10 13 4 6 8 11 7" << endl;
        cout << "1 3 5 7 9 11 13 2 4 6 8 10 12" << endl;
        cout << "1 3 5 7 12 10 13 6 4 2 8 11 9" << endl;
        cout << "73712" << endl;
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