#include <bits/stdc++.h>
using namespace std;
deque<int> deq;
int main()
{
	deq.push_front(1);//1
	deq.push_back(2);//1 2
	deq.pop_front();//2
	deq.pop_back();//empty
	// 以上就是deque常用的四种操作
	// 需要注意的是，deque支持随机访问！！(STL特有的下标从0开始)
	if (!deq.empty())
	{
        cout << deq[0] << endl;
	}
	else cout <<"deq is empty!"<<'\n';
    return 0;
}