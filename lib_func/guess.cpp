#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	int num, guess, tries=0;
	srand(time(0));
	num = rand() % 100 + 1;

	do{
		std::cin >> guess;
		tries++;
		if (guess>num) std::cout << "High\n";
		else if(guess<num) std::cout << "Low\n";
		else std::cout << "Nice\n";
	} while(guess!=num);

	return 0;
}
