#include <iostream>
#define n "\n"
int main()
{
int exp=0 , quan , price;
char stop='y';
while(stop!='n')
{
std::cout << "Item quantity and price:";
std::cin >> quan >> price;
exp+= quan*price;
std::cin >> stop;
}

(exp>=5000)? std::cout << exp-exp*0.1 : std::cout << exp;
std::cout << n;
return 0;
}
