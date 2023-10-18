#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >>a>>b;
    if (a<b)
    {
        cout<<"0 JOGO DUROU"<<' '<<b-a<<' '<<"HORA(S)"<<"\n";
    }
    if (a>=b)
    {
        cout<<"0 JOGO DUROU"<<' '<<24-a+b<<' '<<"HORA(S)"<<"\n";
    }
    return 0;
}
