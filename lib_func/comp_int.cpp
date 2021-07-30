#include <iostream>
#include <cmath>

int main()
{
	float ci,rate,time;
	int P;

	std::cin >> P >> rate >> time;

	ci = P*pow((1+rate/100),time) - P;

	std::cout << ci;

	return 0;
}
