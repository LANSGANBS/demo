#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

const int MAXN = 1005;
const int MAXP = 1e9 + 7;

ll dp[MAXN][2];

ll quick_pow(ll a, ll b, ll p) {
    ll res = 1 % p;
    while (b) {
        if (b & 1) res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        int n;
        ll p;
        cin >> n >> p;
        memset(dp, 0, sizeof(dp));
        dp[1][0] = dp[1][1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                dp[i][0] = (dp[i][0] + dp[j][1]) % MAXP;
                dp[i][1] = (dp[i][1] + dp[j][0]) % MAXP;
            }
        }
        ll ans = (dp[n][0] + dp[n][1]) % MAXP;
        ans = ans * quick_pow(n, n - 2, p) % p;
        cout << "Case #" << k << ": " << ans << endl;
    }
    return 0;
}
