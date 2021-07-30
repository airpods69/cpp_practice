// Using this -> pointer

#include <iostream>
#include <cmath>
#define n '\n'

class power{
	double base;
	int exp;
	public: 
	void set_base_power(int b, int e){
		this->base = b;
		this->exp = e; 
	}
	power() {
		std::cout << pow(base,exp);
	}
};
