#include<iostream>
#include<stack>
using namespace std;
//run this project with these header,pat attention to the blank and line feed
int main()
{
	int n;
	char sb;
	cin>>n;
	getchar();//read the every char
	while(n--)
	{
		stack<char>s;
		while(1)
		{
			sb=getchar();
			if(sb==' '||sb=='\n'||sb==EOF)
			{
				while(!s.empty())
				{
					cout<<s.top();
					s.pop();
				}
				//detection the blank and line feed
				if(sb=='\n'||sb==EOF) break;
                //break this condition
				cout<<" ";
			}
			//finish this condition "while"
			else s.push(sb);
		}
		cout<<endl;
	 }
	return 0;
}
