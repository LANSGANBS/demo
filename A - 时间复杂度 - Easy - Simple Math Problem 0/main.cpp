#include <iostream>
#include <cmath>
const int N=100007;
int arr[100007]={0};
using namespace std;
int main()
{
    int j,ans=0;
    cin >>j;
    for (int i=1;i<=j;i++)
    {
        arr[i]=(pow(-1,i))*i;
        ans+=arr[i];
    }
    cout <<ans<<endl; 
}
