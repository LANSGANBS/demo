#include<iostream>
#include<cmath>
#define endl '\n'
#define buff ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
typedef long long ll;
const ll CF=2e5+9;
using namespace std;

struct node
{
    double x,y;
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll m;double t,v;
    while(cin>>m)
    {
        double ans=CF;
        if(m==0) return 0;
        for(ll i=0;i<m;i++)
        {
            cin>>v>>t;
            if(t<0) continue;
            t=t+4.5*3600/v;
            if(t<ans) ans=t;
        }
        cout<<ceil(ans)<<endl;;
    }
}