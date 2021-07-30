#include <iostream>
#include <cmath>
#define n '\n'

int main()
{
	float area, s, a, b, c;

	std::cin >> a >> b >> c;
	s = (a+b+c)/2;

	area = sqrt(s*(s-a)*(s-b)*(s-c));

	std::cout << area << n;

	return 0;
}
