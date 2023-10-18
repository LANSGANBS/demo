#include<iostream>
using namespace std;
int main()
{
    int n,m,num[100];
    while(cin>>n>>m)
    {
        if(n==0&&m==0) return 0;
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(int j=0;j<n;j++)
        {
            if(m<=num[j])
            {
                for(int k=n;k>j;k--)
                {
                    num[k]=num[k-1];
                }
                num[j]=m;
                break;
            }
        }
        for(int i=0;i<n+1;i++)
        {
            if(i==0)
                cout<<num[i];
            else
                cout<<" "<<num[i];
        }
        cout<<endl;
    }
    return 0;
}

