#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v = {0, 1, 2, 3, 4, 5, 5, 6};
int main() {
	/*
	lowerbound可以在O(logn) 的时间内，从一个升序序列内，找到第一个大于或等于num的数(返回地址)
	upper_bound可以在O(logn) 的时间内，从一个升序序列内，找到第一个大于num的数(返回地址)
	通过与首地址相减，即可得到目标元素的位置
	*/
	cout << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
	cout << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;
	
	//注意，当找不到目标元素时，这两个函数的返回值都是v.end()，即第二个参数
	cout << (lower_bound(v.begin(),v.end(),100) == v.end() ? 1 : -1) << endl;
	
	return 0;
}


