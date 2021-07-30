#include <iostream>
#define n '\n'

class exp{
	static int a;
	int b;
	public:
	void set(int x, int y)
	{
		a=x; b=y;
	}
	void add()
	{
		a+=b;
	}
	void show()
	{
		std::cout << a << n;
		std::cout << b << n;
	}
};

int exp::a;

int main()
{
	exp a,b;
	a.set(1,2);
	a.add();
	a.show();
	b.set(2,1);
	b.show();

	return 0;
}
