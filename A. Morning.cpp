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
    int t;
    cin >> t;
    while (t--)
    {
        string ss;
        cin >> ss;
        int time = 0;
        for (int i = 0; i < 4; ++i)
        {
            int digit = ss[i] - '0';
            if (digit == 0)
                digit = 10;
            if (i == 0)
                time += digit;
            else
            {
                int temp = ss[i - 1] - '0';
                if (temp == 0)
                    temp = 10;
                time += abs(digit - temp) + 1;
            }
        }
        cout << time << endl;
    }
}