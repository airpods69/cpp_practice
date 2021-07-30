#include <iostream>
#define n '\n'
int main(){
	std::string str;
	std::cin >> str;
	int i=0;
	char a[]={'\0'};
	while(str[i]!=a[0])
		i++;
	std::cout << i << n;
}
