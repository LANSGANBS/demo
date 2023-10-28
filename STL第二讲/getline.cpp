#include <bits/stdc++.h>
using namespace std;
int main()
{
	/*
	input:
	a b c d e
	*/
	// 类似与输入这样的，一行内带有空格的字符串，cin是很难读入的，所以我们需要用到getline来读入
	string str;
	getline(cin, str);
	cout << str << endl;
	// 只需要把str改成你的string的名称即可，其他不需要改动
	// 但是要注意，getline遇到回车会停止读入(会把回车读掉，但是不算作字符串的一部分)，但是cin不会读入回车
	// 意味着，类似以下的输入
	/*
		2
		a b c d
		aq q we
	*/
	// 这样的，带有t(数据组数)的数据，因为我们的t是用cin或scanf去读的，读完后缓存区内还会留下第一行的回车
	// 此时用getline直接读入，会使得getline只读一个回车而结束，也就意味着无法正常读入，此时我们只需要在cin后面加入
	// 一个getchar()，读取缓存区内多余的回车即可，下面给出范例
	int t;
	string str1;
	cin >> t;
	getchar();
	while (t--)
	{
		getline(cin, str1);
		cout << str1 << endl;
	}
	return 0;
}
