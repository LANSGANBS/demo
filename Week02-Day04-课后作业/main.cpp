#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long double a,b,c,d,e,f;
    while(cin >>a>>b>>c>>d)
    {
    e=(a-c)*(a-c)+(b-d)*(b-d);
    f=sqrt(e);
    cout<<setprecision(3)<<fixed<<f<<endl;
    }
    return 0;
}
