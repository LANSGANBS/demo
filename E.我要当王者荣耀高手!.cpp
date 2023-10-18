#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int positions[5] = {0, 0, 0, 0, 0};
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            string p;
            int w;
            cin >> p >> w;
            int index;
            if (p == "duikanglu")
                index = 0;
            else if (p == "zhonglu")
                index = 1;
            else if (p == "fayulu")
                index = 2;
            else if (p == "daye")
                index = 3;
            else if (p == "youzou")
                index = 4;
            positions[index] = max(positions[index], w);
        }
        if (*min_element(positions, positions + 5) == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << accumulate(positions, positions + 5, 0) << endl;
        }
    }
}
