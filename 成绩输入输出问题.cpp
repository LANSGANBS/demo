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
void solve()
{
}
int main()
{
    vector<int> scores;
    for (int i = 0; i < 10; i++)
    {
        int score;
        cin >> score;
        scores.push_back(score);
    }
    for (vector<int>::iterator it = scores.begin(); it != scores.end(); it++)
    {
        cout << *it << " ";
    }
}