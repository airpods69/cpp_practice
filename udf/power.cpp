#include <iostream>

int power(double a, int p=2)
{
	double x = 1;
	for (int i=1; i<=p ; i++)
	{
		x = x*a;
	}

	return x;
}

int main()
{
	int a, p;
	std::cin >> a >> p;
	std::cout << power(a,p);
	return 0;
}
