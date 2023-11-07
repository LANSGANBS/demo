#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
const int INF = 1e9;
int T, n, m, k, sx, sy, ex, ey, vis[MAXN][MAXN], dis[MAXN][MAXN];
char grid[MAXN][MAXN];
pair<int, int> portal[MAXN][MAXN];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '~';
}

void bfs(int sx, int sy)
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = 1;
    dis[sx][sy] = 0;
    while (!q.empty())
    {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i], ny = y + dy[i];
            if (valid(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = 1;
                dis[nx][ny] = dis[x][y] + 1;
                q.push({nx, ny});
            }
        }
        if (portal[x][y].first != -1 && !vis[portal[x][y].first][portal[x][y].second])
        {
            vis[portal[x][y].first][portal[x][y].second] = 1;
            dis[portal[x][y].first][portal[x][y].second] = dis[x][y];
            q.push(portal[x][y]);
        }
    }
}

int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'C')
                    sx = i, sy = j;
                if (grid[i][j] == 'G')
                    ex = i, ey = j;
                portal[i][j] = {-1, -1};
            }
        }
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            x1--, y1--, x2--, y2--;
            portal[x1][y1] = {x2, y2};
        }
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        bfs(sx, sy);
        int ans1 = (vis[ex][ey] ? dis[ex][ey] : -1);
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        bfs(ex, ey);
        int ans2 = (vis[sx][sy] ? dis[sx][sy] : -1);
        cout << ans1 << " " << ans2 << "\n";
    }
    return 0;
}