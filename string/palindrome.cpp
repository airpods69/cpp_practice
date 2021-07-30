#include <iostream>
int main()
{
	std::string str;
	int len, count=0;
	std::cin >> str;
	len = str.length();

	for(int i=0,j=len-1; i<len && j>=0 ; i++, j--)
	{
		if(str[i]==str[j]) count++;
	}

	if (count==len) std::cout << "Palindrome";
	else std::cout << "naah";

	return 0;
}
