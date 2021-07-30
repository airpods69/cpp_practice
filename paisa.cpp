#include <iostream>
#define n "\n"
int main()
{
int mon;
std::cin >> mon;
std::cout << "500:" << mon/500 << n;
mon -= 500*(mon/500);
std::cout << "100:" << mon/100 << n;
mon -= 100*(mon%100);
std::cout << "50:" << mon/50 << n;
mon -= 50*(mon/50);
return 0;
}
