#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % x == 0)
            {
                ans += count[a[i] / x];
            }
            if (x == 1)
            {
                ans += count[a[i]];
            }
            count[a[i]]++;
        }
        cout << ans << "\n";
    }
}
