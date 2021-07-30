#include <iostream>
int main()
{
	std::string str1;
	std::string str2;

	std::cin >> str1 >> str2;

	if (str1==str2) std::cout << "Equal";
	else std::cout << "Not Equal";

	return 0;
}
