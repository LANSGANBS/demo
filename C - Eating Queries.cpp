#include <bits/stdc++.h>
using namespace std;
long long t, n, q, a[150010], x, ans, sum[150010], l, r, zh;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        sum[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
            sum[i] = sum[i - 1] + a[n - i + 1];
        for (int i = 1; i <= q; i++)
        {
            cin >> x;
            if (x > sum[n])
                cout << -1 << endl;
            l = 1;
            r = n;
            while (l <= r)
            {
                if (l == r)
                    break;
                zh = (l + r) >> 1;
                if (sum[zh] >= x)
                    r = zh;
                else
                    l = zh + 1;
            }
            if (x <= sum[n])
                cout << l << endl;
            ans = 0;
        }
    }
}