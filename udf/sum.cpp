#include <iostream>

int sum(int x, int y)
{
	return x+y;
}

int main()
{
	int a ,b;
	std::cin >> a >> b;
	std::cout << sum(a,b) << '\n';

	return 0;
}
