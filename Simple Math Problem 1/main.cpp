#include <iostream>
int main()
{
    long long n;
    while (std::cin >>n)
    {
        long long sum=(n%2==0)?-n/2:(n+1)/2;
        std::cout <<-sum<<std::endl;
        return 0;
    }
}
