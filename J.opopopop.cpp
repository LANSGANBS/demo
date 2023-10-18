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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int o, p;
        cin >> o >> p;
        string s;
        cin >> s;
        int n = s.size();
        vector<int> Sangonomiya_Kokomi(26, 0);
        int Kamisato_Ayaka = 0, Venti = 0;
        int Yae_Mikon = INT_MAX;
        for (int l = 0, r = 0; r < n; r++)
        {
            if (++Sangonomiya_Kokomi[s[r] - 'a'] == p && p != 0)
            {
                Venti++;
            }
            if (Sangonomiya_Kokomi[s[r] - 'a'] == 1)
            {
                Kamisato_Ayaka++;
            }
            while (Kamisato_Ayaka >= o && (Venti >= o || p == 0))
            {
                Yae_Mikon = min(Yae_Mikon, r - l + 1);
                if (--Sangonomiya_Kokomi[s[l] - 'a'] == p - 1 && p != 0)
                {
                    Venti--;
                }
                if (Sangonomiya_Kokomi[s[l] - 'a'] == 0)
                {
                    Kamisato_Ayaka--;
                }
                l++;
            }
        }
        if (Yae_Mikon == INT_MAX)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << Yae_Mikon << "\n";
        }
    }
}
