#include <iostream>
#define n '\n'
int main()
{
char a;
std::cin >> a;
std::cout << char(int(a)+1) << n;
return 0;
}
