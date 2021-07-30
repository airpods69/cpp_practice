#include <iostream>

void prime(int x, int y)
{
	for(int i = x ; i<=y ; i++)
	{
	    int count = 0;
		for (int j = 1 ; j<i ; j++)
		{
			if (i%j==0) count++;
		}
		if (count==1) std::cout << i << " ";
	}
}

int main()
{
	int a ,b;
	std::cin >> a >> b;
	prime(a,b);
	return 0;
}
