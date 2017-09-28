#pragma once

class Fraction
{
private:
	int Denominator;
	int Numerator;

	int GCD(int, int);

public:
	Fraction();
	Fraction(int Denominator, int Numerator);
	Fraction(const Fraction &);
	void Normalize();
	void Show();
	~Fraction();

	Fraction Add(Fraction _fraction);
	Fraction Subtract(Fraction _fraction);
	Fraction Divide(Fraction _fraction);
	Fraction Multiply(Fraction _fraction);
	
	//Overloaded Class + Operator
	Fraction operator + (const Fraction &);

	//Overloaded Class - Operator
	Fraction operator - (const Fraction &);

	//Overloaded Class / Operator
	Fraction operator / (const Fraction &);

	//Overloaded Class * Operator
	Fraction operator * (const Fraction &);
};
