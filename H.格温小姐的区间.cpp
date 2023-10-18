#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+10;
ll a[maxn];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n, d;
        cin >> n >> d;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        ll l = max(a[1], 1LL), r = min(a[n], l + d);
        ll ans = 0;
        for(int i = 2; i <= n; i++){
            if(a[i] < l){
                ans += l - a[i];
                a[i] = l;
            }else if(a[i] > r){
                ans += a[i] - r;
                a[i] = r;
            }
            ans += abs(a[i] - a[i-1]);
        }
        cout << ans << endl;
    }
    return 0;
}
