#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long double a;
    while(cin>>a)
    {
    if(a<=0)
    {
        cout <<setprecision(2)<<fixed<<-a<<endl;
    }
    else
        {
        cout <<setprecision(2)<<fixed<<a<<endl;
    }
    }
    return 0;
}
