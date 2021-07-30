#include <iostream>
#define n "\n"

int main()
{
	int arr[5] = {1,2,3,4,5}; 
	int temp;

	for (int i=0; i<5 ; i++)
	std::cout << arr[i] << " ";

	std::cout << n;
	
	temp = arr[0];
	arr[0] = arr[4];
	arr[4] = temp;

	for (int i=0; i<5 ; i++)
	std::cout << arr[i] << " ";

	return 0;
}
