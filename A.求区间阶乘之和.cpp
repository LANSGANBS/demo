#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        deque<int> digits;
        while (n > 0)
        {
            digits.push_front(n % 10);
            n /= 10;
        }
        for (int i = 0; i < m; ++i)
        {
            cout << digits[i];
        }
        cout << endl;
    }
}
