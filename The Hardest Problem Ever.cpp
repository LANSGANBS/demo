#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while (getline(cin,s)&&s!="ENDOFINPUT")
    {
        if (s=="START")
        {
            getline(cin,s);
            for (int i=0;i<s.length();i++)
            {
                char c=s[i];
                if (c>='A'&&c<='Z')
                {
                    s[i]='A'+(c-'A'+21)%26;
                }
            }
            cout <<s<< '\n';
        }
    }
}