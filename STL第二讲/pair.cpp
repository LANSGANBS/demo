#include <bits/stdc++.h>
using namespace std;
struct test
{
	int a;
	string b;
};
int main()
{
	// pair也属于STL容器，根据容器的性质，不难猜到pair也是可以各种嵌套的
	pair<int, int> p;
	pair<string, int> p1;
	pair<int, test> p2;
	pair<vector<int>, set<char>> p3;
	// 等等等等，可以发挥自己的想象力使用

	// 值得注意的是，pair作为一个二元组，第一个元素(左边的元素)的访问方法是，pair名字.first，第二个元素的访问方法是pair名字.second
	p.first = 1;
	p.second = 114514;

	return 0;
}
