#include <iostream>
#define n "\n"
void showChoice()
{
	std::cout << "add for addition\n" << "sub for subtraction\n";
	std::cout << "multi for multiplication\n" << "div for division\n";
}

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int multi(int a, int b)
{
	return a*b;
}

int divi(int a, int b)
{
	return a/b;
}

int main()
{
	int x,y;
	std::string str;

	showChoice();
	std::cin >> str >> x >> y;
	if (str=="add") std::cout << add(x,y);
	else if (str=="sub") std::cout << sub(x,y);
	else if (str=="multi") std::cout << multi(x,y);
	else if (str=="divi") std::cout << divi(x,y);

	return 0;
}
