#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int n, m, p1, p2;
int h[MAXN][MAXN];        // 地图
bool vis[MAXN][MAXN];     // 标记是否被淹没
int dx[] = {0, 0, 1, -1}; // 方向数组
int dy[] = {1, -1, 0, 0};

void bfs()
{
    queue<pair<int, int>> q;
    q.push({p1, p2});
    vis[p1][p2] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && !vis[nx][ny] && h[nx][ny] <= h[x][y])
            {
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    while (cin >> n >> m >> p1 >> p2)
    {
        memset(vis, false, sizeof(vis));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> h[i][j];
            }
        }
        bfs();
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (vis[i][j])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}