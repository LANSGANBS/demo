#include <iostream>

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int n;
    std::cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            ans += gcd(i, j);
        }
    }

    std::cout << ans << std::endl;
    return 0;
}