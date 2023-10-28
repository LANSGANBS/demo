#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    unordered_set<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }
    bool alice_win = false;
    while (!a.empty() && !b.empty())
    {
        int x = *a.begin();
        a.erase(a.begin());
        if (b.count(x ^ k))
        {
            alice_win = true;
            break;
        }
        int y = *b.begin();
        b.erase(b.begin());
        if (a.count(y ^ k))
        {
            alice_win = false;
            break;
        }
    }
    if (alice_win)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
    }
    return 0;
}