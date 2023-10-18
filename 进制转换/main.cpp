#include<iostream>
using namespace std;
char c[1000];
void ten_convert(int n,int r)
{
    int i=0,t;
    if(n<0)
    {
        cout<<"-";
        n=-1*n;
    }
    while(n!=0)
    {
        t=n%r;
        n=n/r;
        switch(t)
        {
            case 10:
                c[i++]='A';
                break;
            case 11:
                c[i++]='B';
                break;
            case 12:
                c[i++]='C';
                break;
            case 13:
                c[i++]='D';
                break;
            case 14:
                c[i++]='E';
                break;
            case 15:
                c[i++]='F';
                break;
            default:
                c[i++]=t+'0';
                break;
        }
    }
    for(int k=i-1;k>=0;k--)
    {
        cout<<c[k];
    }
    cout<<endl;
}
int main()
{
    int n,r;
    while(cin>>n>>r)
        {
         if(n<0)
         {
             ten_convert(n,r);
         }
        else
         {
             ten_convert(n,r);
         }
    }
}
