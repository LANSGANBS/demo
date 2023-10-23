#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    int ans = 6, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    for (int i = 0; i < n; i++)
    {
        nums[i] = nums[i] % m;
        if (nums[i] == 0)
            ans = 0;
        else
            ans = min(ans, m - nums[i]);
        if (nums[i] % 2 == 0)
            cnt2++;
        else
            cnt1++;
    }
    if (m == 4 && cnt1)
    {
        if (cnt2)
            ans = min(ans, 1);
        else if (cnt1 > 1)
            ans = min(ans, 2);
    }
    if (m == 4 && cnt2 > 1)
        ans = min(ans, 0);
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
