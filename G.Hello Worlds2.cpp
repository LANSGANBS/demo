#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
/*
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize(3)
*/
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpll;
const ll MAX_INT = 0x3f3f3f3f;
const ll MAX_LL = 0x3f3f3f3f3f3f3f3f;
const ll CF = 2e5 + 9;
const ll mod = 1e9 + 7;

void solve()
{
    string s;
    int n;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    bool found = 0; // 标记是否找到过"Hello World"
    int offset = 0; // 记录已经删除的字符数
    while (!s.empty())
    {
        int index = s.find("Hello World");
        if (index != string::npos)
        {
            cout << index + 1 + offset << ' ' << index + 11 + offset;
            s.erase(0, index + 11);
            offset += index + 11; // 更新已经删除的字符数
            found = 1;
            if (s.find("Hello World") != string::npos) // 如果还有Hello World，则输出空格
            {
                cout << ' ';
            }
        }
        else
        {
            s.erase(0, s.size()); // 清空字符串，结束循环
        }
    }
    if (!found)
    {
        cout << "-1 -1";
    }
    cout << endl;
}

int main()
{
    buff;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}