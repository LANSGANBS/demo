#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m=0;
    char ch;
    cin >> n;
    while (n--)
    {
        cin >> ch >> m;
        for (int i=0; i<m; i++)
        {
            cout << ch;
            ++ch;
        }
        cout << endl;
    }
}
