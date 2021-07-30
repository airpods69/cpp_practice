#include <iostream>
#include <cctype>
#define n '\n'

int main()
{
	char ch;
	std::cin >> ch;

	if (isalpha(ch))std::cout << "Alpha";
	else if (isdigit(ch)) std::cout << "Digit";
	else std::cout << "Special";

	std::cout << n;
}
