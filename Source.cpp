#include"Fraction.h"
#include<iostream>
using namespace std;



int main()
{

	Fraction f2(3, 5);
	Fraction f3(7, 2);
	f2.Show();
	f3.Show();

	Fraction result = f2.Add(f3);
	result.Show();
	result = f2.Subtract(f3);
	result.Show();
	result = f2.Divide(f3);
	result.Show();
	result = f2.Multiply(f3);
	result.Show();

	cin.get();
	return 0;

}