#include <iostream>
int main()
{
    int a1, a2, a3;
    std::cin >> a1 >> a2 >> a3;
    (a1>a2) ? (a1>a3) ? std::cout << a1 : std::cout << a3 : (a2>a3) ? std::cout << a2 : std::cout << a3;
    return 0;
}

