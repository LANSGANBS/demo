#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char pas[57];
    cin >> t;
    while (t--)
    {
        cin >> pas;
        int len = strlen(pas);
        if (len < 8 || len > 16)
        {
            cout << "NO" << endl;
        }
        else
        {
            int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
            for (int i = 0; i < len; i++)
            {
                if (pas[i] >= 'A' && pas[i] <= 'Z')
                {
                    num1++;
                }
                else if (pas[i] >= 'a' && pas[i] <= 'z')
                {
                    num2++;
                }
                else if (pas[i] - '0' >= 0 && pas[i] - '0' <= 9)
                {
                    num3++;
                }
                else if (pas[i] == '~' || pas[i] == '!' || pas[i] == '@' || pas[i] == '#' || pas[i] == '$' || pas[i] == '%' || pas[i] == '^')
                {
                    num4++;
                }
            }
            if ((num1 > 0 && num2 > 0 && num3 > 0) || (num1 > 0 && num2 > 0 && num4 > 0) || (num1 > 0 && num3 > 0 && num4 > 0) || (num2 > 0 && num3 > 0 && num4 > 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}