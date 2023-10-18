#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >>a;
        if (a==1)
        {
            int b;
            cin >> b;
            arr.push_back(b);
        }
        else if (a==2)
        {
            sort(arr.begin(),arr.end());
        }
        else if (a==3)
        {
            reverse(arr.begin(),arr.end());
        }
        else if (a==4)
        {
            cout <<arr.size()<<endl;
        }
        else if (a==5)
        {
            for (int j=0;j<arr.size();j++)
            {
                cout <<arr[j]<<" ";
            }
            cout <<endl;
        }
        else if (a==6)
        {
            arr.clear();
        }
    }
}
