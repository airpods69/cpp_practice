#include <iostream>
using namespace std;
class demo
{
	int d;
	public:
	demo(int dd)
	{
		d=dd;
	}
	demo operator + (demo d1)
	{
		demo d_temp(0);
		d_temp = d- d1.d;
		return d_temp;
	}
	void display ()
	{
		cout << "value of d: "<< d;	}
};

int main()
{
	demo d1(25),d2(20),d3(0) ; d3=d1+d2; d3.display();
	return 0;
}
