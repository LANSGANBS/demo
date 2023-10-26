#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;						//声明一个string ,名字为s
    
    s = "zrr";						//将"zrr"赋值给s
    s = s + " "; 					//在s的后面加上一个空格，现在s为"zrr ",时间复杂度为O(新的字符串的长度)
    s += "nb";						//在s的后面加上一个"nb"，现在s为"zrr nb"，时间复杂度为O(要加上的字符串的长度)
    cout << s << '\n';				//string 可以直接使用cout输出,也可以用cin直接输入
    printf("%s\n", s.c_str());		//用printf输出要这样写，记住即可，将来你会明白的
    
    cout << s.substr(4, 2) << '\n'; //取s的子串,从下标为4的地方开始向后取2个字符,结果应为"nb"
    string a = s;					//声明一个新的string，名字为a,并将s赋值给a，此时a为"zrr nb",时间复杂度为O(n),注意 char 数组不能这样直接赋值!
    a.replace(0,3, "zr");			//把从下标0开始的连续3个字符替换为"zr",现在a为"zr nb"，时间复杂度为O(n)
    if(s<a)							//string可以直接按照字典序比较大小,字典序很好理解，你就假设字典里面有这两个单词，那个在前面，那个就更小。显然"zrr nb">"zr nb"。
    {
        cout << s << '<' << a << '\n';
    }
    else if(s>a) 
    {
        cout << s << '>' << a << '\n';
    }
    else
    {
        cout << s << '=' << a << '\n';
    }
    
    
    //对s进行遍历,这里我们输出s的奇数下标 
    //zrr nb
    //012345
    //取奇数下标结果就是"r b"
    for (int i = 0; i < (int)s.length();i++)	//s.length()返回的是字符串长度，写(int)是一个好习惯，相信我有时候会救你。
    {
        if(i%2==1) cout << s[i];
    }
    cout << '\n';
    
    s.clear(); 						//清空s,现在s为""，时间复杂度通常为O（1）
   									//现在a为"zr nb",但是众所周知zr是个菜鸡，所以我们想把"zr nb"变成"zr is sb"
    								//这里提供一种办法(其实有一万种方法)
    a.erase(3, 1);					//把从下标3开始的连续1个字符删除,现在s为"zr b"，时间复杂度为O（n）
    a.insert(3, "is s");			//在下标3前面插入"is s",现在s为"zr is sb"，时间复杂度为O（n）
    cout << a << '\n';
    
    return 0;
}
