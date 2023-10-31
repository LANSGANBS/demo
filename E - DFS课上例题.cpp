#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        nums[i] = i + 1;
    }
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << "    " << nums[i];
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));
}

int main()
{
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}