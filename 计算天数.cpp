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
    int year, month, day;
    cin >> year >> month >> day;
    int ans = 0;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        a[2] = 29;
    }
    for (int i = 1; i < month; i++)
    {
        ans += a[i];
    }
    ans += day;
    cout << ans << endl;
}