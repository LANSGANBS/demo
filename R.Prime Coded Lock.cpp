#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 9;
ll t, st, en;
ll prime[N]; // prime[i] = 0 表示是素数
ll vis[N];   // vis[i] = 1 表示这个数字已经出现过了
struct Num
{
    ll num, step;
};
void pre()
{ // 埃式筛判断质数
    for (int i = 2; i <= 100000; i++)
    {
        if (prime[i])
            continue;
        for (int j = i * 2; j < N; j += i)
        {
            prime[j] = 1;
        }
    }
}

string ll_to_str(ll x)
{ // 把long long 转成 string
    string str = "";
    while (x)
    {
        str = (char)('0' + x % 10) + str;
        x /= 10;
    }
    return str;
}
ll string_to_ll(string &str)
{ // 与上面的相反
    ll num = 0;
    for (int i = 0; i < (ll)str.length(); i++)
    {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}
ll bfs()
{
    queue<Num> q;
    q.push({st, 0});
    while (!q.empty())
    {
        Num tmp = q.front();
        q.pop();
        ll num = tmp.num, step = tmp.step;
        if (num == en)
            return step; //  满足条件退出
        string strnum = ll_to_str(num);
        // 每个位置分别调换数字
        for (int i = 0; i <= 3; i++)
        {
            char ori = strnum[i]; // 保存原来的数字
            for (int j = 0; j <= 9; j++)
            {
                if (i == 0 && j == 0)
                    continue; // 题目要求是四位数，所以第一位不可以为0
                strnum[i] = (char)('0' + j);
                ll nxtnum = string_to_ll(strnum);
                if (vis[nxtnum])
                    continue; // 出现过的数字就不用再进队，因为答案肯定更劣
                else
                    vis[nxtnum] = 1;
                if (!prime[nxtnum])
                    q.push({nxtnum, step + 1}); // 是质数，进队
            }
            strnum[i] = ori; // 回复原状，进行下次数字的枚举
        }
    }
}
int main()
{
    pre();
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> st >> en;
        memset(vis, 0, sizeof vis);
        printf("Case #%d: ", i);
        cout << bfs() << '\n';
    }
    return 0;
}

// 给定起始密码和目标密码，每次只能改变一个数字，问最少几步把起始密码改成目标密码且每步之后数字依然是质数
