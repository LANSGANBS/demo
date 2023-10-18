#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if (n%7==0) return n;
    string digits=to_string(n);
    for (int i=0;i<digits.size();++i)
    {
        for (int j=0;j<10;++j)
        {
            if (i==0&&j==0) continue;
            string temp=digits;
            temp[i] ='0'+j;
            if (stoi(temp)%7==0) return stoi(temp);
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >>t;
    for (int i=0;i<t;++i)
    {
        int n;
        cin >>n;
        cout <<solve(n)<<endl;
    }
    return 0;
}