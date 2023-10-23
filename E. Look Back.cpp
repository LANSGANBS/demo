#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> bi(63);
void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int last = 0;
    for (int i = 1; i < n; i++)
    {
        double temp = ((double)nums[i - 1] / nums[i]);
        int cnt = 0;
        while (temp <= 1)
        {
            cnt++;
            temp *= 2;
        }
        int ti = lower_bound(bi.begin(), bi.end(), temp) - bi.begin();
        ans += max(0, last + ti - cnt);
        last = max(0, last + ti - cnt);
    }
    cout << ans << endl;
}
int main()
{
    ll temp = 1;
    for (int i = 0; i < 63; i++)
    {
        bi[i] = temp;
        temp *= 2;
    }
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}