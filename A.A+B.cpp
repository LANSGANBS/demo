#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, s;
    cin >> a >> b >> s;
    for (int i = 2; i <= 16; i++)
    {
        bool valid = true;
        try
        {
            long long x = stoll(a, nullptr, i);
            long long y = stoll(b, nullptr, i);
            long long z = stoll(s, nullptr, i);
            if (x + y == z)
            {
                cout << i << endl;
                return 0;
            }
        }
        catch (const std::invalid_argument &ia)
        {
            valid = false;
        }
        catch (const std::out_of_range &oor)
        {
            valid = false;
        }
        if (!valid)
        {
            break;
        }
    }

    cout << "0" << endl;
    return 0;
}