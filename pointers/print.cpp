#include <iostream>
int main() {
	int var, *ip;
	
	std::cin >> var;
	
	ip = &var;

	std::cout << "Value of var: " << var << "\n";

	std::cout << "Address of var: " << ip << "\n";

	std::cout << "Value of *ip: " << *ip << "\n";

	return 0;
}

