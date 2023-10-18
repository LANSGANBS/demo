#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		map<string,int>mp;
		string a[4][1007];
		int n;
		cin >>n;
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin >>a[i][j];
				mp[a[i][j]]++;
			}
		}
		for(int i=1;i<=3;i++)
		{
			int WOAIYUANSHEN=0;
			for(int j=1;j<=n;j++)
			{
				if(mp[a[i][j]]==1)WOAIYUANSHEN+=3;
				else if(mp[a[i][j]]==2)WOAIYUANSHEN+=1;
			}
			cout <<WOAIYUANSHEN<<" ";
		}
	}
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		map<string,int>mp;
		string a[3][1007];
		int n;
		cin >>n;
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin >>a[i][j];
				mp[a[i][j]]++;
			}
		}
		for(int i=1;i<=3;i++)
		{
			int WOAIYUANSHEN=0;
			for(int j=1;j<=n;j++)
			{
				if(mp[a[i][j]]==1)WOAIYUANSHEN+=3;
				else if(mp[a[i][j]]==2)WOAIYUANSHEN+=1;
			}
			cout <<WOAIYUANSHEN<<" ";
		}
	}
}
