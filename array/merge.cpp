#include <iostream>

void merge(int a[],int b[], int c[], int x, int y, int &z);


int main()
{
	int x,y,z;
	std::cin >> x >> y;
	
	int a[x],b[y],c[z];

	for(int i=0 ; i<x ; i++)
	{
		std::cin >> a[i];
	}
	
	for(int i=0 ; i<y ; i++)
	{
		std::cin >> b[i];
	}
	merge(a,b,c,x,y,z);	

	for(int i=0 ; i<x ; i++)
		std::cout << a[i] << " ";
}


void merge(int a[],int b[],int c[], int x , int y , int &z)
{
	int i=0 , j=y-1;
	z=0;
	while (i<x && j>0)
	{
		if (a[i]<b[j]) c[z++]=a[i++];
		else if (a[i]>b[j]) c[z++]=b[j--];
		else {c[z++]=a[i++]; j++;}
	}
	for (int T=i;T<x;T++)
		c[z++]=a[T];
	for (int T=y;T>=0;T--)
		c[z++]=b[T];
}
