#include <iostream>
#define n "\n"
int main()
{
    int a ,b, power=1;
    std::cin >> a >> b;
    for (int i=1; i<=b ; i++)
    {
        power*=a;
    }
    std::cout << power << n;
}
