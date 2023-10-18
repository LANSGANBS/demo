#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr1[m][n], arr2[n][m];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m - 1; ++j)
        {
            cout << arr2[i][j] << " ";
        }
        cout << arr2[i][m - 1] << endl;
    }
}