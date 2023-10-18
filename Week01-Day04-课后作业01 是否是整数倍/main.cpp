#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >>a>>b;
    if (a%b==0||b%a==0)
    {
        cout <<"Yes"<<"\n";
    }
    else{
        cout <<"No"<<"\n";
    }
    return 0;
}
