#include"Fraction.h"
#include<iostream>
using namespace std;



int main()
{

	Fraction f2(8,16);
	Fraction f3(7,21);
	f2.Show();
	f3.Show();
	Fraction c = f2 + f3;
	c.Show();
	c = f2 - f3;
	c.Show();
	c = f2 / f3;
	c.Show();
	c = f2*f3;
	c.Show();
	cin.get();
	return 0;

}
