#include <iostream>
#define n "\n"
int main()
{
    int r;
    long long int  fact=1;
    std::cin >>  r;
    for (int i=1; i<=r ; i++)
    {
        fact*=i;
    }
    std::cout << fact << n;
}
