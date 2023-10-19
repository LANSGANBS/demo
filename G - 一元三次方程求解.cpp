#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpll;
const ll MAX_INT = 0x3f3f3f3f;
const ll MAX_LL = 0x3f3f3f3f3f3f3f3f;
const ll CF = 2e5 + 9;
const ll mod = 1e9 + 7;
double x, a, b, c, d, x1, x2, xx, s = 0;

double f(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c >> d;
    for (x = -100; x <= 100; x++)
    {
        x1 = x;
        x2 = x + 1;
        if (s == 3)
            break;
        else if (f(x1) == 0)
        {
            cout.precision(2);
            cout << fixed << x1 << " ";
            s++;
        }
        else if (f(x1) * f(x2) < 0)
        {
            while (x2 - x1 >= 0.001)
            {
                xx = (x1 + x2) / 2;
                if (f(x1) * f(xx) < 0)
                    x2 = xx;
                else
                    x1 = xx;
            }
            cout.precision(2);
            cout << fixed << x1 << " ";
            s++;
        }
    }
}