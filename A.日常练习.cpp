#include<iostream>
#include<string>
#include<algorithm>
#define endl '\n'
#define ll long long
#define int ll
using namespace std;
const int N=1e6+7;
int u[N],v[N],w[N];
signed main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x0,x1,x2;
	cin>>x0>>x1>>x2; //加训星期
	int a0,a1,b0,b1;
	cin>>a0>>a1>>b0>>b1;
	int sum=0;
	if(a1<=x0)
	{
		sum+=4*(b0-a0);
		if(b1<x0) sum+=0;
		if(b1>=x0&&b1<x1) sum+=1;
		if(b1>=x1&&b1<x2) sum+=2;
		if(b1>=x2) sum+=3;
	}
	if(a1>x0&&a1<=x1)
	{
		sum+=4*(b0-a0-1);
		if(b1<x0) sum+=0;
		if(b1>=x0&&b1<x1) sum+=1;
		if(b1>=x1&&b1<x2) sum+=2;
		if(b1>=x2) sum+=3;
	}
	if(a1>x1&&a1<=x2)
	{
		sum+=4*(b0-a0-2);
		if(b1<x0) sum+=0;
		if(b1>=x0&&b1<x1) sum+=1;
		if(b1>=x1&&b1<x2) sum+=2;
		if(b1>=x2) sum+=3;
	}
	cout<<sum<<endl;
	return 0;
}