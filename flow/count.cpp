#include <iostream>
#define n "\n"
int main()
{
    int a, pos=0, neg=0, zero=0;
    char opt='y';
    while (opt=='y')
    {
        std::cin >> a;
        if (a>0)
            pos++;
        else if (a<0)
            neg++;
        else
            zero++;

        std::cin >> opt;
    }
    std::cout << pos << n << neg << n << zero << n;
}
