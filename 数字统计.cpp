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
    int L, R;
    cin >> L >> R;
    int count = 0;
    for (int i = L; i <= R; i++)
    {
        string num = to_string(i);
        for (char c : num)
        {
            if (c == '2')
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
