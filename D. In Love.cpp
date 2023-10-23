#include <bits/stdc++.h>
using namespace std;
multiset<int> be, en;
void solve()
{
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char c;
        int a, b;
        cin >> c >> a >> b;
        if (c == '+')
        {
            be.insert(a);
            en.insert(b);
        }
        else
        {
            be.erase(be.find(a));
            en.erase(en.find(b));
        }
        if (be.empty())
        {
            cout << "NO" << endl;
            continue;
        }
        int l = (*be.rbegin()), r = (*en.begin());
        if (l > r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}