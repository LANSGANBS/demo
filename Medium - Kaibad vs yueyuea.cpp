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
int n,m,q,a[505][505],b[505][505];
int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>q;
    while (q--) {
        int x1,y1,x2,y2,lx,ly;
        cin>>x1>>y1>>x2>>y2>>lx>>ly;
        a[x1][y1]+=lx;
        a[x2+1][y1]-=lx;
        a[x1][y2+1]-=lx;
        a[x2+1][y2+1]+=lx;
        b[x1][y1]+=ly;
        b[x2+1][y1]-=ly;
        b[x1][y2+1]-=ly;
        b[x2+1][y2+1]+=ly;
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            b[i][j]+=b[i-1][j]+b[i][j-1]-b[i-1][j-1];
            int res=a[i][j]*i*i+b[i][j]*j*j;
            cout<<res<<" ";
        }
        cout<<endl;
    }
}