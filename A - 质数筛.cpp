//以色列是哪来的畜生？
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
const ll CF = 1e5 + 7;
const ll mod = 1e9 + 7;
void solve()
{
}
int main()
{
    buff;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<bool> Genshin_Impact(CF, 1);
    Genshin_Impact[0] = Genshin_Impact[1] = 0;
    for (int i = 2; i * i <= 100000; i++)
    {
        if (Genshin_Impact[i])
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                Genshin_Impact[j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Genshin_Impact[nums[i]])
        {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}
