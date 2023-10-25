#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> times(n);
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        times[i].resize(k);
        for (int j = 0; j < k; ++j)
        {
            cin >> times[i][j];
        }
        sort(times[i].begin(), times[i].end());
    }
    int m;
    cin >> m;
    int max_time = 0;
    for (int i = 0; i < n; ++i)
    {
        int k = times[i].size();
        for (int j = 0; j < k; ++j)
        {
            int cur_time = times[i][j];
            int cnt = min(m, k * (n - 1) + j + 1);
            max_time = max(max_time, cnt * cur_time);
        }
    }
    cout << max_time << endl;
    return 0;
}