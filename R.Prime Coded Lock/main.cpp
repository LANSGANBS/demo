#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e4 + 7;
bitset<maxn> is_prime;
vector<int> prime;
int dis[maxn];

void get_prime()
{
    is_prime.set();
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < maxn; i++)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
            for (int j = i + i; j < maxn; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

bool judge(int x, int y)
{
    int cnt = 0;
    while (x)
    {
        if (x % 10 != y % 10)
            cnt++;
        x /= 10;
        y /= 10;
    }
    return cnt == 1;
}

void bfs(int s, int b)
{
    queue<int> q;
    memset(dis, 0x3f, sizeof(dis));
    dis[s] = 0;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < prime.size(); i++)
        {
            if (prime[i] < 1000 || prime[i] == u)
                continue;
            if (judge(u, prime[i]) && dis[prime[i]] > dis[u] + 1)
            {
                dis[prime[i]] = dis[u] + 1;
                q.push(prime[i]);
            }
        }
    }
}

int main()
{
    get_prime();
    int t, a, b;
    cin >> t;
    for (int cas = 1; cas <= t; cas++)
    {
        cin >> a >> b;
        bfs(a, b);
        cout << "Case #" << cas << ": ";
        if (dis[b] == 0x3f3f3f3f)
            cout << "Impossible" << endl;
        else
            cout << dis[b] << endl;
    }
    return 0;
}
