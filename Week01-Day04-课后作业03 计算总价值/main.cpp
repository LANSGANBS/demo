#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    int a,b;
    cin >>a>>b;
    if (a==1)
    {
        cout<<setprecision(2)<<fixed<<b*4<<"\n";
    }
    else if (a==2)
    {
        cout<<setprecision(2)<<fixed<<b*4.5<<"\n";
    }
    else if (a==3)
    {
        cout<<setprecision(2)<<fixed<<b*5<<"\n";
    }
    else if (a==4)
    {
        cout<<setprecision(2)<<fixed<<b*2<<"\n";
    }
    else if (a==5)
    {
        cout<<setprecision(2)<<fixed<<b*1.5<<"\n";
    }
    return 0;
}
