#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char arr[15] = "Hello World";

    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        int n;
        scanf("%d\n", &n);
        char str[1025];
        for (int i = 0; i < n + 1; i++)
        {
            scanf("%c", str + i);
        }
        int has_same = 0;
        for (int i = 0; i < n; i++)
        {
            int mark = 1;
            for (int j = 0; j < 11; j++)
            {
                if (str[i + j] != arr[j])
                {
                    mark = 0;
                    break;
                }
            }
            if (mark)
            {
                has_same = 1;
                cout << i + 1 << " " << i + 11 << " ";
            }
        }
        if (has_same == 0)
            cout << -1 << " " << -1 << endl;
        else
            cout << endl;
    }
    return 0;
}