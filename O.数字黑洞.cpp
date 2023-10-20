#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    while (s != "495")
    {
        cnt++;
        sort(s.begin(), s.end());
        int a = stoi(s);
        reverse(s.begin(), s.end());
        int b = stoi(s);
        s = to_string(b - a);
        while (s.size() < 3)
        {
            s = "0" + s;
        }
    }
    cout << cnt << endl;
}