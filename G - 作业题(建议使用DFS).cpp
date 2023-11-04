#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
/*
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize(3)
*/
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpll;
const ll MAX_INT = 0x3f3f3f3f;
const ll MAX_LL = 0x3f3f3f3f3f3f3f3f;
const ll CF = 2e5 + 9;
const ll mod = 1e9 + 7;

int nums[20];
int n, k, res = 0;

bool isPrime(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void dfs(int idx, int cnt, int sum)
{
    if (cnt == k)
    {
        if (isPrime(sum))
            res++;
        return;
    }
    for (int i = idx; i < n; i++)
    {
        dfs(i + 1, cnt + 1, sum + nums[i]);
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    dfs(0, 0, 0);
    cout << res;
    return 0;
}