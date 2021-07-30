#include <iostream>
#include <cmath>
int palindrome(int n);

int main(){
	int n,x;
	std::cin >> n;
	x = palindrome(n);
	(x==1) ? std::cout << "Palindrome" : std::cout << "Not Palindrome";
	return 0;
}

int palindrome(int n){
	int reverse = 0, original = n, i=0;
	while (original > 0)
	{
		reverse += floor(original/10)*(pow(10,i));
		original -= floor(original/10);
		original /= 10;
		i++; 
	}
	std::cout << reverse << " " << original;

	if (n==reverse) return 1;
	else return 0;
}
