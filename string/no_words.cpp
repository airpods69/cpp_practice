#include <iostream>

int main()
{
    int spaces=1, len; //1 for last word
    std::string str;
    std::getline (std::cin,str);

    len = str.length();
    
    for(int i=0 ; i< len ; i++)
    {
    	if (str[i]== ' ') spaces++;
    }

    std::cout << spaces;
	return 0;
}
