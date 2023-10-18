#include <iostream>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        for (char &c : s)
        {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            {
                c = c ^ 32;
            }
        }
        cout << s << endl;
    }
    return 0;
}
