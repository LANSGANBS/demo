#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e6 + 7;
map<int, int> mp;
int a[N], b[N];
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            a[i] = s[i] - '0';
        }
        sort(a, a + len);
        if (n == 1 || n - k == 1)
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < len; i++)
            {
                mp[a[i]]++;
            }
            int cnt = 0;
            for (int i = 0; i < len; i++)
            {
                b[a[i]]++;
                if (b[a[i]] == 1)
                {
                    if (mp[a[i]] % 2 == 1)
                        cnt++;
                }
            }
            if (k - cnt >= -1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        mp.clear();
        memset(a, 0, N);
        memset(b, 0, N);
    }
}