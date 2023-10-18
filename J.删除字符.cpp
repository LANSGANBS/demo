#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, sum = 0, x = 0;

    while (cin >> x && x != -1)
    {
        if (x == 1)
        {
            a++;
        }
        else if (x == 2)
        {
            b++;
        }
        else if (x == 3)
        {
            c++;
        }
        sum++;
    }
    int tot = a + b + c;
    cout << "A=" << a << endl;
    cout << "B=" << b << endl;
    cout << "C=" << c << endl;
    cout << "Tot=" << tot << endl;

    if (a > sum / 2)
    {
        cout << "A-yes" << endl;
    }
    if (b > sum / 2)
    {
        cout << "B-yes" << endl;
    }
    if (c > sum / 2)
    {
        cout << "C-yes" << endl;
    }
    if (a <= sum / 2 && b <= sum / 2 && c <= sum / 2)
    {
        cout << "all-NO" << endl;
    }

    return 0;
}