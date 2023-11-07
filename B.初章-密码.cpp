#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int num[5],n;
ll dp[12][3][3][3][3][3];
bool vis[12][3][3][3][3][3];

ll dfs(int pos,int a,int b,int c,int d,int e,int sum,bool lead,bool limit){
    if(pos==0) return sum==0;
    if(!limit && !lead && vis[pos][a][b][c][d][e][sum]) return dp[pos][a][b][c][d][e][sum];
    int up=limit?num[pos]:9;
    ll ans=0;
    for(int i=0;i<=up;i++){
        if(i==0&&a>0) ans=(ans+dfs(pos-1,a-1,b,c,d,e,(sum+i)%3,lead&&i==0,limit&&i==up))%mod;
        if(i==1&&b>0) ans=(ans+dfs(pos-1,a,b-1,c,d,e,(sum+i)%3,lead&&i==0,limit&&i==up))%mod;
        if(i==2&&c>0) ans=(ans+dfs(pos-1,a,b,c-1,d,e,(sum+i)%3,lead&&i==0,limit&&i==up))%mod;
        if(i==3&&d>0) ans=(ans+dfs(pos-1,a,b,c,d-1,e,(sum+i)%3,lead&&i==0,limit&&i==up))%mod;
        if(i==4&&e>0) ans=(ans+dfs(pos-1,a,b,c,d,e-1,(sum+i)%3,lead&&i==0,limit&&i==up))%mod;
    }
    if(!limit && !lead) vis[pos][a][b][c][d][e][sum]=1,dp[pos][a][b][c][d][e][sum]=ans;
    return ans;
}
int solve(int x){
    int pos=0;
    while(x){
        num[++pos]=x%10;
        x/=10;
    }
    return dfs(pos,0,0,0,0,0,0,true,true);
}
int main(){
    int T;
    cin>>T;
    memset(dp,0,sizeof(dp));
    memset(vis,0,sizeof(vis));
    while(T--){
        cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
