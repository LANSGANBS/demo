#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    long long arr[100005] = {0}, a_sum[100005] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        a_sum[i] = arr[i] + a_sum[i + 1];
    }
    long long cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur = cur + a_sum[i];
        cout << cur << " ";
    }
    cout << "\n";
}
