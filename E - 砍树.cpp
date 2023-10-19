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
    int n, m;
    cin >> n >> m;
    vector<int> trees(n);
    int max_hei = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
        max_hei = max(max_hei, trees[i]);
    }
    int left = 0, right = max_hei;
    while (left < right)
    {
        int mid = (left + right + 1) / 2;
        long long wood = 0;
        for (int i = 0; i < n; i++)
        {
            if (trees[i] > mid)
            {
                wood += trees[i] - mid;
            }
        }
        if (wood >= m)
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << left << endl;
}
