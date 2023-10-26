#include <bits/stdc++.h>
using namespace std;
int main()
{
	//先进行一些vector的基本操作
    vector<int> a;						//声明一个装int的vector，vector的名字是a 
    //vector<double> b;					//声明一个装double的vector，vector的名字是b
    a.push_back(1);						//在a的末尾装入1，当前的a是[1],时间复杂度O(1)
    a.push_back(2);						//在a的末尾装入2，当前的a是[1,2]
    a.push_back(3);						//在a的末尾装入3，当前的a是[1,2,3]
    cout << a.size() << '\n';			//输出a的大小，结果为3，时间复杂度O(1)
    cout << a[1] << '\n';				//输出a[1]的值，vector和数组一样可以用[]来访问其中的元素
    
    //让我们输出整个vector中的元素，看看和预期是否相同
    for (int i = 0; i < (int)a.size(); i++)//相信我，加这个int有时会救你
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    
    //接下来的操作大家自行输出vector验证
    a.erase(a.begin() + 1);				//删除a[1]，当前的a是[1,3],时间复杂度O(n)
    a.erase(a.begin() + 1);				//删除a[1]，当前的a是[1]
    //
    a.insert(a.begin() + 0, 100); 		//在a[0]前面插入100,当前的a是[100,1],时间复杂度O(n)
    a.insert(a.begin() + 1, 99);  		//在a[1]前面插入99,当前的a是[100,99,1]
    //
    sort(a.begin(), a.end());   		//对整个vector进行排序，当前的a是[1,99,100],时间复杂度O(n*logn)
    reverse(a.begin(), a.end()); 		//翻转整个vector，当前a是[100,99,1],时间复杂度O(n)
    
    //用迭代器进行遍历，输出vector
    vector<int>::iterator itt; 			//声明一个指向vector<int>容器的迭代器
    for (itt = a.begin(); itt != a.end();itt++)
    {
        cout << *itt << ' ';
    }
    cout << '\n';
    //
    sort(a.begin(), a.end());
    
    //auto为自动类型，会根据右边的类型自动声明左边的类型，避免了迭代器的繁琐声明
    //如果在这里编译报错，请打开C++11标准
    auto it=lower_bound(a.begin(), a.end(), 99);	//查找大于等于99的第一个元素，并返回指向它的迭代器,时间复杂度O(logn)
    cout << *it << '\n';
    it=upper_bound(a.begin(), a.end(), 99);			//查找大于99的第一个元素，并返回指向它的迭代器,时间复杂度O(logn)
    cout << *it << '\n';
    a.clear();										//清空vector,此时a为[],时间复杂度O(n)
    /*
    注意！！！
    使用lower_bound 和upper_bound之前一定要把vector从小到大排序!!!!!!
    使用lower_bound 和upper_bound之前一定要把vector从小到大排序!!!!!!
    使用lower_bound 和upper_bound之前一定要把vector从小到大排序!!!!!!
    */
    a.push_back(1); 								//此时a为[1],时间复杂度O(1)
    a.pop_back();									//删除最后一个元素,此时a为[],时间复杂度O(1)
    cout << a.size() << '\n';
    return 0;
}
