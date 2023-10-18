#include <bits/stdc++.h>
using namespace std;
bool ch(string s)
{
    stack<char> st;
    for (char c:s)
    {
        switch (c)
        {
            case '(':
            case '[':
            st.push(c);
            break;
            case ')':
            if (st.empty() || st.top() != '(') return 0;
            st.pop();
            break;
            case ']':
            if (st.empty() || st.top() != '[') return 0;
            st.pop();
            break;
        }
    }
    return st.empty();
    return 1;
}
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (ch(s))
    {
        cout << "YES" << std::endl;
    }
    else
    {
        cout << "NO" << std::endl;
    }
    return 0;
}
