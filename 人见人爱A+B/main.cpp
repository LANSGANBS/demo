#include <iostream>
using namespace std;
int main()
{
    int AH,AM,AS,BH,BM,BS,sec,min,hou,n;
//  cin >>AH>>AM>>AS>>BH>>BM>>BS;
    cin >>n;
    while (n--)
    {
        cin >>AH>>AM>>AS>>BH>>BM>>BS;
        int H=AH+BH;
        int M=AM+BM;
        int S=AS+BS;
        sec=S%60;
        min=S/60+M%60;
        hou=min/60+H;
        cout <<hou<<" "<<min<<" "<<sec<<endl;
    }
//  cout <<hou<<" "<<min<<" "<<sec<<endl;
return 0;
}
