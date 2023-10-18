#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    cin >>n;
    queue<int> q;
    while (n--)
    {
        int n;
        cin >>n;
        if (n==1)
        {
            int a;
            cin >>a;
            q.push(a);
        }
        else if (n==2)
        {
            if (!q.empty()) cout << q.front() << endl;
        }
        else if (n==3)
        {
            if (!q.empty()) q.pop();
        }
        else if (n==4)
        {
            cout << q.size() << endl;
        }
    }
}
