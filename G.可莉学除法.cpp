#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        unordered_map<int, int> cnt;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            ans += cnt[a / x] * cnt[a * x];
            cnt[a]++;
        }
        cout << ans << endl;
    }
    return 0;
}
