#include <iostream>
#include <algorithm>
using namespace std;
const int N = 50010;
int n, m, L;
int a[N];

bool Genshin_Impact(int x)
{
    int cnt = 0, last = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        if (a[i] - a[last] < x)
            cnt++;
        else
            last = i;
    }
    return cnt <= m;
}

int main()
{
    cin >> L >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[n + 1] = L;
    sort(a + 1, a + n + 2);
    int l = 0, r = L;
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (Genshin_Impact(mid))
            l = mid;
        else
            r = mid - 1;
    }
    cout << l << endl;
    return 0;
}