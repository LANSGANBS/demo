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
    vector<int> x(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int a0, a1, b0, b1;
    cin >> a0 >> a1 >> b0 >> b1;
    int days = 0;
    for (int i = a0; i <= b0; ++i)
    {
        if (i == a0 && i == b0)
        {
            for (int j = a1; j < b1; ++j)
            {
                if (find(x.begin(), x.end(), j) == x.end())
                {
                    ++days;
                }
            }
        }
        else if (i == a0)
        {
            for (int j = a1; j <= 7; ++j)
            {
                if (find(x.begin(), x.end(), j) == x.end())
                {
                    ++days;
                }
            }
        }
        else if (i == b0)
        {
            for (int j = 1; j < b1; ++j)
            {
                if (find(x.begin(), x.end(), j) == x.end())
                {
                    ++days;
                }
            }
        }
        else
        {
            for (int j = 1; j <= 7; ++j)
            {
                if (find(x.begin(), x.end(), j) == x.end())
                {
                    ++days;
                }
            }
        }
    }
    if (a0 == b0 && a1 <= b1 && find(x.begin(), x.end(), a1) == x.end())
    {
        --days;
    }
    cout << days << endl;
}