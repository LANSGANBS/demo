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
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int left = 1, right = *max_element(arr, arr + n);
        while (left <= right)
        {
            int mid = (left + right) / 2;
            int a = 0;
            for (int i = 0; i < n; i++)
            {
                a += (arr[i] - 1) / mid;
            }
            if (a > m)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << left << endl;
    }
}