#include <bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int age;
	bool operator<(const student& that) const {
		if(name == that.name) {
			return age < that.age;
		}
		return name > that.name;
	}
};
int main()
{
	priority_queue<int> p;			// 声明一个存放int类型的优先队列，名字为p
	
	p.push(1);						// 向p中加入1,当前p中的元素是[1]
	p.push(2);						// 向p中加入2,当前p中的元素是[1,2]
	p.push(6);						// 向p中加入6,当前p中的元素是[1,2,6]
	p.push(6);						// 向p中加入6,当前p中的元素是[1,2,6,6]
	// 注意,单次push操作的复杂度是O(logn),n是优先队列内元素的个数，后面的n同理
	
	// 由于优先队列没有迭代器,故我们无法直接遍历优先队列，需要用到一个while循环
	while(!p.empty())  				// 如果优先队列p非空
	{
		cout << p.top() << endl;  	// 输出优先队列顶部元素O(1)
		p.pop();					// 弹出优先队列顶部元素O(logn)
	}
	
	puts("");
	
	// 当然,我们这样得到的优先队列是大顶堆,也就是最大的元素在最上面,也就是p.top()得到的元素
	// 那如果我们需要小顶堆怎么办呢？有一种办法是你可以push -x 进堆里，当然记得取出来的时候还要乘-1
	
	// 还有一个比较麻烦的写法
	priority_queue<int,vector<int>, greater<int> > q;
	q.push(1);
	q.push(2);
	q.push(6);
	q.push(6);
	
	while(!q.empty())  			
	{
		cout << q.top() << endl;  
		q.pop();				
	}
	// 观察输出我们会发现, 这就已经是一个小顶堆了
	
	puts("");
		
	
	// 当然,优先队列里面同样可以存结构体,如果我们想让优先队列里的学生，先按姓名的字典序升序排列，姓名相同的按年龄降序,就需要在结构体里面重载小于号
	// 但是注意，这里重载符号里面的内容，是和sort那里重载符号相反的，即你要是想按姓名升序，这里应该写大于号，即name > that.name;
	priority_queue<student> st;
	st.push({"aaa", 10});
	st.push({"bbb", 11});
	st.push({"bbb", 12});
	
	while(!st.empty())  			
	{
		cout << st.top().name << ' ' << st.top().age << endl;  
		st.pop();				
	}
	
	// 再输出,就已经是我们想要的答案了
    return 0;
}

