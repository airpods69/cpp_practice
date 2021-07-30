#include <iostream>
#define end '\n'

int main()
{
	int arr[5] = {1,2,3,4,5};
	int temp;

	for (int i=0 ; i<5 ; i++)
	std::cout << arr[i];

	for (int i=0 ; i<3 ; i++)
	{
		temp = arr [i];
		arr[i] = arr[4-i];
		arr[4-i] = temp;
	}

	for (int i=0 ; i<5 ; i++)
	std::cout << arr[i];

	return 0;
}
