#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    using namespace std;
    int n;
    string c[1000];
    ios_base::sync_with_stdio(false);
    while (cin>>n, n!=0)
    {
        int i;
        for (i=0; i<n;i++) cin >>c[i];
        if (n==1||n==2)
        {
            cout <<c[0] << endl;
            continue;
        }
        sort(c,c+n);
        int ct=1;
        int mx=0;
        string&best=c[0];
        for (i=1; i<n;i++)
        {
            if (c[i]==c[i-1]) ct++;
            else ct=1;
            if (ct>mx)
            {
                mx=ct;
                best=c[i];
            }
        }
        cout <<best<<endl;
    }
    return 0;
}
