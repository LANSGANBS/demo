#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int dot_product = 0;
    for (int i = 0; i < n; i++)
    {
        dot_product += a[i] * b[i];
    }

    cout << dot_product << endl;

    return 0;
}
