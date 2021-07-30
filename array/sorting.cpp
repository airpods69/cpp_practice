#include <iostream>

void putin(int arr[], int n)
{
	for(int i=0 ; i<n ; i++)
		std::cin >> arr[i];
}

void display(int arr[], int n)
{
	for(int i=0 ; i<n ; i++)
	std::cout << arr[i];
}

void sort_ins(int arr[], int n)
{
	int min=arr[0], temp;
	for(int i=0; i<n ; i++)
	{
	for(int j=0; j<n ; j++)
	{
		if (arr[j]<min)
		{
			temp = arr[0];
			arr[0] = arr[j];
			arr[j] = temp;
		}
		min = arr[j];
	}
}
}

int main()
{
	int arr[6] = {6,5,4,3,2,1};

	display(arr, 6);

	sort_ins(arr, 6);

	display(arr, 6);

	return 0;
}
