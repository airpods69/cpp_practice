#include <iostream>

int idk(int i);
double idk(double d);

int main()
{
	int i;
	double d;

	std::cin >> i >> d;

	std::cout << idk(i) << '\n' << idk(d);
}

int idk(int i)
{
	return 2*i;
}

double idk(double d)
{
	return 4*d;
}
