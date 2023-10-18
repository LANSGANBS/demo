#include<iostream>
using namespace std;
int main()
{
    int a;
    while (cin>>a)
    {
        if(a>=90&&a<=100)
        {
            cout<<"A"<<endl;
        }
        else if(a>=80&&a<90)
        {
            cout<<"B"<<endl;
        }
        if(a>=70&&a<80)
            {
            cout<<"C"<<endl;
        }
        if(a>=60&&a<70)
            {
            cout<<"D"<<endl;
        }
        if(a>=0&&a<60)
            {
            cout<<"E"<<endl;
        }
        if(a<0||a>100)
            {
                cout<<"Score is error!"<<endl;
            }
    }
    return 0;
}
