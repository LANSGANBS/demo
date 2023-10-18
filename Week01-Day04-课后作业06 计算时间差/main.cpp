#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    if (a>c&&b>d)
    {
        cout<<"0 JOGO DUROU"<<' '<<23+c-a<<' '<<"HORA(S) E"<<' '<<60-b+d<<' '<<"MINUTO(S)"<<"\n";
    }
    else if (a>c&&b<d)
    {
        cout<<"0 JOGO DUROU"<<' '<<24+c-a<<' '<<"HORA(S) E"<<' '<<d-b<<' '<<"MINUTO(S)"<<"\n";
    }
    else if (a<c&&b>d)
    {
        cout<<"0 JOGO DUROU"<<' '<<c-a-1<<' '<<"HORA(S) E"<<' '<<60-b+d<<' '<<"MINUTO(S)"<<"\n";
    }
    else
    {
        cout<<"0 JOGO DUROU"<<' '<<c-a<<' '<<"HORA(S) E"<<' '<<d-b<<' '<<"MINUTO(S)"<<"\n";
    }
    return 0;
}
