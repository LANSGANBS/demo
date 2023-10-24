#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
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
}
int main()
{
    buff;
    string str;
    getline(cin, str);
    istringstream iss(str); // 从字符串中读取数据
    vector<int> v;
    int x;
    while (iss >> x) // 读取整数,并将其存储到 x 变量中
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v.front() << " " << v.back() << " ";
    double sum = 0;
    for (int num : v) // 遍历一个容器中的所有元素
    {
        sum += num;
    }
    cout << fixed << setprecision(3) << static_cast<double>(sum / v.size()) << endl;
}