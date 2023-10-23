#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool is_sorted = true;
    if (a[0] < a[1])
    { // ascending order
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                is_sorted = false;
                break;
            }
        }
    }
    else
    { // descending order
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                is_sorted = false;
                break;
            }
        }
    }
    if (is_sorted)
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "unsorted" << endl;
    }
    return 0;
}
