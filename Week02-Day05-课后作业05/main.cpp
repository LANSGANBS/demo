#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,m=0,n=0,num=0;
        a=num%10;
        b=num%100/10;
        c=num/100;
        while (cin>>m>>n)
        {
        if(a*a*a+b*b*b+c*c*c==num&&num>=m&&num<=n)
        {
            cout <<num<<endl;
        }
        num++;
    }
    
    return 0;
}
