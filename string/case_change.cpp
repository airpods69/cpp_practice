#include <iostream>
#define n '\n'

void lowercase(std::string input);
void uppercase(std::string input);

int main(){
	std::string input;
	std::getline (std::cin , input);

	int option;
	std::cout << "1. LowerCase" << n << "2. UpperCase" << n;
	std::cin >> option;
	
	switch(option){
		case 1:
			lowercase(std::string(input));
		case 2:
			uppercase(std::string(input));
	};

	return 0;
}

void lowercase(std::string input){
	for (int i=0 ; input[i] != '\0' ; i++){
		input[i]= input[i]+32;
	}
	std::cout << input;
}

void uppercase(std::string input){
	for (int i=0 ; input[i] != '\0' ; i++){
		input[i] = input[i]-32;
	}
	std::cout << input;
}
