#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<multiset<int>> sets(k);
        for (int i = 0; i < k; i++)
        {
            int c;
            cin >> c;
            for (int j = 0; j < c; j++)
            {
                int x;
                cin >> x;
                sets[i].insert(x);
            }
        }
        multiset<int> s;
        for (int i = 0; i < k; i++)
        {
            s.insert(*sets[i].begin());
        }
        int ans = *s.rbegin() - *s.begin();
        for (int i = 0; i < k; i++)
        {
            s.erase(s.find(*sets[i].begin()));
            sets[i].erase(sets[i].begin());
            if (!sets[i].empty())
            {
                s.insert(*sets[i].begin());
            }
            if (s.size() == k)
            {
                ans = min(ans, *s.rbegin() - *s.begin());
            }
        }
        cout << ans << endl;
    }
    return 0;
}