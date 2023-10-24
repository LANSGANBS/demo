#include <iostream>
using namespace std;

int main()
{
    int x, y, z, n, m;
    cin >> x >> y >> z >> n >> m;
    int count = 0;
    for (int i = 0; i <= n / x; i++)
    {
        for (int j = 0; j <= n / y; j++)
        {
            int k = m - i - j;
            if (k >= 0 && k % z == 0 && i * x + j * y + k / z == n)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
