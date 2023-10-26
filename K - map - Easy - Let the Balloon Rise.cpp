#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while (cin >> N && N)
    {
        map<string, int> mp;
        string color, now;
        int temp = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> color;
            ++mp[color];
            if (mp[color] > temp)
            {
                temp = mp[color];
                now = color;
            }
        }
        cout << now << endl;
    }
}