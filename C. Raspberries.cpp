#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> count(k, 0);
        for (int i = 0; i < n; ++i)
        {
            count[a[i] % k]++;
        }

        int operations = 0;
        for (int i = 1; i <= k / 2; ++i)
        {
            if (i != k - i)
            {
                operations += max(count[i], count[k - i]);
            }
            else
            {
                operations += count[i] / 2;
            }
        }
        operations += count[0];

        cout << operations << endl;
    }

    return 0;
}
