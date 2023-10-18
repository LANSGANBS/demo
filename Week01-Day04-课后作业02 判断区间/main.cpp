#include <iostream>

using namespace std;

int main()
{
    long double a;
    cin >>a;
    if(0<=a&&a<=25)
    {
        cout <<"Intervalo [0,25]"<<"\n";
    }else if(25<a&&a<=50)
    {
        cout <<"Intervalo (25,50]"<<"\n";
    }else if(50<a&&a<=75)
    {
        cout <<"Intervalo (50,75]"<<"\n";
    }else if(75<a&&a<=100)
    {
        cout <<"Intervalo (75,100]"<<"\n";
    }else
    {
        cout <<"Fora de intervalo"<<"\n";
    }
}

