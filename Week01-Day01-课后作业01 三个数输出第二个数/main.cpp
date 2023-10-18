#include<bits/stdc++.h>
using namespace std;
const int N=100007;
int main()
{
    int n,as[N],max=-1,min=101,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>as[i];
        if(as[i]>max) max=as[i];
        if(as[i]<min) min=as[i];
    }
    printf("%d\n%d\n%.2f",max,min,(sum+0.0)/n);
}
