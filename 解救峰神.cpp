#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
/*
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize(3)
*/
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpll;
const ll MAX_INT = 0x3f3f3f3f;
const ll MAX_LL = 0x3f3f3f3f3f3f3f3f;
const ll CF = 2e5 + 9;
const ll mod = 1e9 + 7;
using namespace std;
int book[51][51], a[51][51];
int n, m, p, q, MIN = 99999;

int NEST[4][2] = {
    {0, 1},   // 向右走一步
    {1, 0},   // 向下走一步
    {0, -1},  // 向左走一步
    {-1, 0}}; // 向上走一步

void dfs(int x, int y, int step)
{ // step用来表示找到小红，小明走了多少步
    int tx, ty, k;
    if (x == p && y == q)
    { // 说明已经找到了小红
        /*还要说明一点：这里 为什么是（x，y），而不是（tx，xy）
        其实很简单 就是上一个dfs()函数传过来的坐标 ，做了这个dfs()函数的形参
        换句话说：就是判断点是否找到小红*/
        if (step < MIN)
            MIN = step;
        return;
        /*返回上一步，继续寻找其他路径（就是退回到上一个坐标，重新找其他路径）
        回到上一个dfs()函数*/
    }
    for (k = 0; k <= 3; k++)
    {                        // 下一步的坐标
        tx = x + NEST[k][0]; // 下一步的坐标：当前的+下一步要走的
        ty = y + NEST[k][1]; // 下一步坐标：当前的+下一步要走的
        // 判断是否越界,越界则重新进入for循环
        if (tx < 1 || tx > n || ty < 1 || ty > m)
            continue;
        // 运行到这里，说明这条路，则需要换个方向，也就是重新进入for循环
        if (a[tx][ty] == 0 && book[tx][ty] == 0)
        {
            book[tx][ty] = 1;      // 标记这个点走过
            dfs(tx, ty, step + 1); // 进行下一步
            book[tx][ty] = 0;      // 重新尝试，退回到上一个点的位置
        }
    }
    return; // 执行到这里，这层dfs()函数已经结束，则要回到上一层dfs()函数
}

int main()
{
    buff;
    int i, j, startx, starty;
    cin >> n >> m; // 输入迷宫的大小
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> a[i][j];   // 输入迷宫的形状
    cin >> startx >> starty;  // 小明的坐标
    cin >> p >> q;            // 小红的坐标
    book[startx][starty] = 1; // 起始点标记，就不会回到这个点了
    dfs(startx, starty, 0);   // 开始寻找最短路径
    cout << MIN;              // 输出最短路径
    return 0;
}
