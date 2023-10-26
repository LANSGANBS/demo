#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct people {
	string name;
	int age;
	bool operator<(const people& that) const {
		if (name == that.name) {
			return age < that.age;
		}
		return name < that.name;
	}
} p[] = {{"sjx", 3}, {"lh", 114514}, {"ddl", 114514}, {"ddl", 114513}, {"ljz", -1}, {"cqs", 6}, {"wlk", 999}, {"zr", 100}, {"cd", 100}, {"ioa", 996}};
bool cmp(people x, people y) {
	if (x.name == y.name) {
		return x.age < y.age;
	}
	return x.name < y.name;
}
// 这里我们可以用两种办法实现结构体排序，一种是直接在结构体里重载小于号(注意，这部分一模一样抄就可以了，重载的内容根据你需要的逻辑进行修改，别的不要动)
// 比如我们这里想让p数组中的人，先按名字升序，名字一样的按年龄升序，就需要这样写重载函数
// 如果像让名字降序，名字相同按年龄升序呢？重载函数修改如下即可
/*
		bool operator<(const people& that) const {
			if(name == that.name) {
				return age < that.age;
			}
			return name > that.name;
		}
*/
// 第二种办法是自己手写一个返回值是bool类型的比较函数(一般就叫cmp函数(名字其实可以自己随便起)) 参数是两个你想要比较的东西，然后具体写法跟重载小于号是一样的
int main() {
	sort(p, p + 10);     // 写了重载函数就可以直接sort，否则需要自己手写cmp函数，并在sort的时候作为参数加入，如34行写法
	sort(p, p + 10, cmp);// 实际上效果与33行相同
	for (int i = 0; i <= 9; i++) {
		cout << p[i].name << ' ' << p[i].age << endl;
	}
	return 0;
}
