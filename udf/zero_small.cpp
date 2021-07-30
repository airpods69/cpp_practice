#include <iostream>

int zero_small(int &x , int &y);

int main()
{
	int a , b;
	std::cin >> a >> b;
	zero_small(a,b);

	std::cout << a << " " <<  b;
	return 0;
}

void zero_small(int &a, int &b)
{
	if(a<b)
		a=0;
	else
		b=0;
}
