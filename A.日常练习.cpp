#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
const ll MAX_INT=0x3f3f3f3f;
const ll MAX_LL=0x3f3f3f3f3f3f3f3f;
const ll CF=2e5+9;
const ll mod=1e9+7;
signed main()
{
    int T;
    T=1;
    //cin>>T;
    while (T--)
    {
        int l=1,r=100;
        int x=25;
        while (l<=r)
        {
            int mid=(l+r)>>1;
            cout <<l<<' '<<r<<"-------"<<endl;
            if (mid<=x) l=mid+1;
            else r=mid-1;
        }
    }
}
