#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N = 0, S = 0;
        cin >> N >> S;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int sum = 0, start = 0, end = 0, minLen = N + 1;
        while (end < N)
        {
            while (sum <= S && end < N)
            {
                sum += a[end++];
            }
            while (sum > S && start < N)
            {
                if (end - start < minLen)
                {
                    minLen = end - start;
                }
                sum -= a[start++];
            }
        }
        if (minLen == N + 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << minLen << endl;
        }
    }
}
