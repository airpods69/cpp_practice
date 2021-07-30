#include <iostream>

int main()
{
int price;
int quantity;
int expenses=0;
char opt='y';

while (opt=='y')
{
std::cout << "Item price:";
std::cin >> price;
std::cout << "Item quantity:";
std::cin >> quantity;
expenses += quantity*price;
std::cout << "Continue? ";
std::cin >> opt;
}
std::cout << "Total is:";
 
(expenses>=5000) ? std::cout << expenses-(expenses*0.1) : std::cout << expenses; 

return 0;
} 
