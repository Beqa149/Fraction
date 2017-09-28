#pragma once

class Fraction
{
private:
	int Denominator;
	int Numerator;
public:
	Fraction();
	Fraction(int Denominator, int Numerator);
	Fraction(const Fraction &);
	void Show();
	Fraction Add(Fraction _fraction);
	Fraction Subtract(Fraction _fraction);
	Fraction Divide(Fraction _fraction);
	Fraction Multiply(Fraction _fraction);
};