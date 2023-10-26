#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;					//声明一个存放int的set,名字为s
    s.insert(5);				//向s中加入5,当前s中的元素为[5],时间复杂度为O（logn）
    s.insert(1);				//向s中加入1,当前s中的元素为[1,5],时间复杂度为O（logn）
    s.insert(6);				//向s中加入6,当前s中的元素为[1,5,6],时间复杂度为O（logn）
    s.insert(6);				//向s中加入6,当前s中的元素为[1,5,6],时间复杂度为O（logn）,因为s会自动去重排序所以s中的元素不变
    
    
    //让我来输出一下s中的元素吧
    for (auto it = s.begin(); it != s.end();it++)
    {
        cout << *it << '\n';//*表示输出it所指向的那个位置的元素
    }
    cout << '\n';
    cout << s.size() << '\n';	//输出s的大小
    cout << s.empty() << '\n';	//返回s是否为空
    auto it= s.find(101);		//在s中查找101并且返回指向101的迭代器,如果没找到会返回s.end(),时间复杂度为O（logn）
    if(it!=s.end())
    {
        cout  << "s have " << 101 << '\n';
    }
    else
    {
        cout  << "s don't have " << 101 << '\n';
    }
    it= s.find(6);				//在s中查找6并且返回指向6的迭代器,如果没找到会返回s.end(),时间复杂度为O（logn）
    if(it!=s.end())
    {
        cout  << "s have " << 6 << '\n';
    }
    else
    {
        cout  << "s don't have " << 6 << '\n';
    }
    s.erase(it);				//删除it指向的位置，这里就是删除6,时间复杂度为O（logn）。需要注意的是千万不要删s.end（）这个位置，会RE,时间复杂度为O（logn）
    s.insert(99);				//现在s是[1,5,99]
    it=s.lower_bound(5); 		//返回指向第一个大于等于5的元素的迭代器，如果没有返回s.end(),时间复杂度为O（logn）
    cout << *it << '\n';
    it=s.upper_bound(5); 		//返回指向第一个大于5的元素的迭代器，如果没有返回s.end(),时间复杂度为O（logn）
    cout << *it << '\n';
    s.clear();					//清空s，时间复杂度为O（n）
    
    return 0;
}
