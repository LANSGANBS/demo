#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp; // 声明一个下标为string,值为int的map，名字为mp。
    // 这里我们赋予mp一些意义，表示人的姓名映射到人的智商
    // 我们插入智商为180的zrr
    mp["zrr"] = 180;                // 这样mp里面就记录了zrr的智商为180，时间复杂度为O（logn）
    cout << mp["zrr"] << '\n';      // 查询zrr的智商，时间复杂度为O（logn）
    cout << mp.count("zr") << '\n'; // 查询mp中是否含有下标"zr"，如果不确定里面是否含有，一定要这样查询，时间复杂度为O（logn）
    // cout<<mp["zr"]<<'\n';
    // 如果这样直接查询为得到0，有的同学会想如果是0那就说明没有呗，没必要用count。这样显然不对！万一zr的智商就是0呢，你就无法判断是不存在还是真的为0
    // 还会引发一个更致命的问题，这样查询会向mp里面添加元素，多次查询可能会炸空间，不信的话你试试。

    cout << mp.size() << '\n';  // 输出mp的大小，时间复杂度为O（1）
    cout << mp.empty() << '\n'; // 输出mp是否为空，时间复杂度为O（1）
    mp["zr"] = 5;               // 继续添加元素

    // 遍历mp
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        /// 这里it->first表示下标，it->second表示值
        cout << it->first << ' ' << it->second << '\n';
        // cout << (*it).first << ' ' << (*it).second << '\n';//这种写法也可以
    }

    auto it = mp.lower_bound("mya"); // 查询mp下标中大于等于"mya"的第一元素，返回其迭代器，时间复杂度为O（logn）。因为这里下标是string所以按照字典序排序的话，mya <myj <zr
    cout << it->first << ' ' << it->second << '\n';
    // mp.upper_bound();同上,只不过不是"大于等于"而是"大于"
    mp.clear(); // 清空mp，时间复杂度为O（n）

    return 0;
}