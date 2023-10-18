#include <iostream>
using namespace std;
int main()
{
    int num,R;
    while (cin >>num>>R)
    {
        if (R<=10)
        {
            int t[1007],i=0;
            while (num!=0)
            {
                t[i++]=num%2;
                num=num/2;
            }
            for(int k=i-1;k>=0;k--)
            {
                cout <<t[k];
            }
            cout<<endl;
    }
        if (R>10)
        {
            int p[1007],j=0;
            while (num!=0)
            {
                p[j++]=num%16;
                num=num/16;
            }
            for(int q=j-1;q>=0;q--)
            {
                cout <<p[q];
            }
            cout<<endl;
        }
    }
}

