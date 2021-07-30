#include <iostream>
#include <cmath>

int binary(int arr[], int val, int n);

int main()
{
	int n;
	std::cin >> n;
	int val, arr[n]; 

	for(int i=0 ; i<n ; i++)
	{
		std::cin >> arr[i];
	}

	std::cin >> val;

	std::cout << binary(arr, val, n);

	return 0;
}

int binary(int arr[], int val, int n)
{
    int mid , lbound=0 , ubound=n-1;
    
	while (lbound<=ubound)
	{
		mid = (lbound + ubound)/2;
		if (val>arr[mid]) lbound = mid+1;
		else if (val<arr[mid]) ubound = mid-1;
		else return 1;
	}
	return 0;
}
