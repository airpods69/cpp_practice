#include <iostream>
int main()
{
    int year;
    std::cin >> year;
    (year%4==0) ? std::cout << "True" : std::cout << "False"; 
}
