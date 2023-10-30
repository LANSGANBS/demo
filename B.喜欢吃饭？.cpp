#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, r;
        cin >> n >> r;
        long long cur_len = 0;
        static long long lens[1000005] = {0};
        for (long long i = 0; i < n; i++)
        {
            cin >> lens[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cur_len += lens[i];
            if (cur_len >= r)
                break;
        }
        if (cur_len < r)
        {
            cout << r << endl;
        }
        else
        {
            cout << cur_len << endl;
        }
    }
    return 0;
}