#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        vector<vector<int>> arr(k, vector<int>(2));
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
        }
        bool flag = true;
        int s = arr[0][0], e = arr[0][1];
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i][0] >= s && arr[i][1] >= e)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << s << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}