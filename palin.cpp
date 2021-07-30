#include <iostream>

int palindrome(int n);

int main()
{
	int n,x;
	std::cin >> n;
	x = palindrome(n);
	(x==1) ? std::cout << "palindrome" : std::cout << "not a palindrome";
	return 0;
}

int palindrome(int n){
	int a[n];
	for(int i=0;i<n;i++)
	{
		std::cout << "enter an integer:";
		std::cin >> a[i];
	}
	
	int reversed = 0, remainder, original;
	for(int i = 0 ; i  < n  ;i++){
		original = a[i];

    // reversed integer is stored in reversed variable
	while (a[i] != 0) {
        	remainder = a[i] % 10;
        	reversed = reversed * 10 + remainder;
        	a[i] /= 10;
    	}
    }

	if (original == reversed) return 1;
	else return 0;
	}	
