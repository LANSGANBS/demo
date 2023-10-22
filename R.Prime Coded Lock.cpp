#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

const int MAXN = 10000;
bool isPrime[MAXN];
bool vis[MAXN];

void init()
{
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAXN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int bfs(int start, int end)
{
    queue<int> q;
    memset(vis, false, sizeof(vis));
    q.push(start);
    vis[start] = true;
    int step = 0;
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            int cur = q.front();
            q.pop();
            if (cur == end)
            {
                return step;
            }
            for (int j = 0; j < 4; j++)
            {
                int mask = 1 << j;
                for (int k = 0; k <= 9; k++)
                {
                    int next = cur & (~mask) | (k << j);
                    if (isPrime[next] && !vis[next])
                    {
                        q.push(next);
                        vis[next] = true;
                    }
                }
            }
        }
        step++;
    }
    return -1;
}

int main()
{
    init();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int start, end;
        cin >> start >> end;
        int ans = bfs(start, end);
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
