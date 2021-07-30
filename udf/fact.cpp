#include <iostream>

int fact(int n){
	if (n==1) return 1;
	else return n*fact(n-1);
}

int main()
{
	int b;
	std::cin >> b;
	std::cout << fact(b) << "\n";
	return 0;
}
