#include <iostream>
#include <cstdio>

int main()
{
	FILE *file;
	std::string str;

	if ((file = fopen("everything.txt","r")) == NULL) {printf("Cannot open file.\n"); exit(1);}

	int fgets(FILE *file);

	str = fgets(file);
	std::cout << str;

	int fclose (FILE *file);

	return 0;
}
