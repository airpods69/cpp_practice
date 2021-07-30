#include <iostream>

int search(int arr[], int n, int val);

int main()
{
	int n, val;
	std::cin >> n;
	int arr[n];
	
	for (int i=0; i<n ; i++)
		std::cin >> arr[i];

	std::cin >> val;

	std::cout << search(arr, n, val);
}

int search(int arr[], int n, int val)
{
	for(int i=0; i<n ; i++)
	{
		if (val==arr[i])
		{
			return 1;
		}
	}
	return 0;
}
