#include"Fraction.h"
#include<iostream>
using namespace std;

bool Fraction::Comments = false;

int main()
{
	Fraction f2(1,5);
	Fraction f3(0.5);
	f2.Show();
	f3.Show();
	Fraction c;

	c = f2;
	c.Show();
	

	cin.get();
	return 0;

}
