#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double a,b,c,d;
    cin >>a>>b>>c;
    d=sqrt(b*b-4*a*c);
    if (a==0||d<0)
    {
        cout <<"Impossivel calular"<<"\n";
    }
    else
    {
        cout <<setprecision(5)<<fixed<<"R1="<<(-b+d)/(2*a)<<"\n";
        cout <<setprecision(5)<<fixed<<"R2="<<(-b-d)/(2*a)<<"\n";
    }
}
