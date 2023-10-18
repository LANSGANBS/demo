#include <bits/stdc++.h>
using namespace std;

struct Genshin_Impact
{
    double m, v, cost_performance;
    bool operator<(const Genshin_Impact &a) const
    {
        return cost_performance > a.cost_performance;
    }
};

int main()
{
    int N, T;
    cin >> N >> T;
    vector<Genshin_Impact> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i].m >> a[i].v;
        a[i].cost_performance = a[i].v / a[i].m;
    }
    sort(a.begin(), a.end());
    double ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (T >= a[i].m)
        {
            T -= a[i].m;
            ans += a[i].v;
        }
        else
        {
            ans += T * a[i].cost_performance;
            break;
        }
    }
    cout << setprecision(2) << fixed << ans << endl;
}