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
void solve()
{
    
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x;
    cin>>x;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            cout<<mid<<endl;
            return 0;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    cout<<-1<<endl;
    return 0;
}