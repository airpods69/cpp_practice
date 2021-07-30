#include <iostream>
#define n '\n'

int abs(int i);
double abs(double d);

int main()
{
	int i;
	double d;
	std::cin >> i >> d;

	std::cout << abs(i) << n;
	std::cout<< abs(d);
	
	return 0;
}

int abs(int i)
{
	return (i<0)? -i : i;	
}

double abs(double d)
{
	return (d<0)? -d : d;
}
