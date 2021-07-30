#include <iostream>
int main()
{
int a,b,c;
std::cin >> a >> b >> c;

(a>b)? (a>c)? std::cout << a : std::cout << c : (b>c)? std::cout << b : std::cout << c;
std::cout << "\n";
return 0;
}
