#include <iostream>

int sum(int a , int b);
void display(int c);

int main(){
	int a,b;
	std::cin >> a >> b;
	display(sum(a,b));
	return 0;
}

int sum(int a, int b){
	return a+b;
}

void display(int a){
	std::cout << '\n' << a;
}
