#include <iostream>
#define r '\n'

int main()
{
	int n;
	std::cin >> n;
	int arr[n];
	for (int i=0 ; i<n ; i++) 
		std::cin >> arr[i];

	int sum=0;
	for (int i=0 ; i<n ; i++)
	{
		sum+=arr[i];
	}
	std::cout << sum << r;
	std::cout << sum/n << r;
}
