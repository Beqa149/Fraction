#include "Fraction.h"
#include<iostream>
using namespace std;

//Default Constructor
Fraction::Fraction()
{
	if (Comments)
		cout << "Default Constructor" << endl;
	Denominator = 1;
	Numerator = 0;
}

//Overloaded Constructor
Fraction::Fraction(int Numerator, int Denominator)
{
	if(Comments)
		cout << "Overloaded Constructor" << endl;
	if (!(Denominator == 0))
	{
		this->Denominator = Denominator;
		this->Numerator = Numerator;
	}
	else
		cout << "Incorrect Denominator! " << endl;
	Normalize();
}

Fraction::Fraction(const Fraction & f)
{
	Denominator = f.Denominator;
	Numerator = f.Numerator;
}

int Fraction::GCD(int a , int b)
{
	return b == 0 ? a : GCD(b, a%b);
}

void Fraction::Normalize()
{
	int gcd = GCD(Numerator, Denominator);

	Denominator /= gcd;
	Numerator /= gcd;

	if(Denominator < 0)
	{
		Denominator *= -1;
		Numerator *= -1;
	}
}

void Fraction::Show()
{
	cout << "Your Fraction Is : " << Numerator << "/" << Denominator << endl;
}

//Addition
Fraction Fraction::Add(Fraction _fraction)
{
	Fraction result;
	result.Numerator = ( this->Numerator * _fraction.Denominator ) + ( this->Denominator * _fraction.Numerator );
	result.Denominator = (this->Denominator * _fraction.Denominator);

	return result;
}

//Subtract
Fraction Fraction::Subtract(Fraction _fraction)
{
	Fraction result;
	result.Numerator = (this->Numerator * _fraction.Denominator) - (this->Denominator * _fraction.Numerator);
	result.Denominator = (this->Denominator * _fraction.Denominator);
	return result;
}

//Divide
Fraction Fraction::Divide(Fraction _fraction)
{
	Fraction result;
	result.Numerator = (this->Numerator * _fraction.Denominator);
	result.Denominator = (this->Denominator * _fraction.Numerator);
	return result;
}

//Multiplay
Fraction Fraction::Multiply(Fraction _fraction)
{
	Fraction result;
	result.Numerator = (this->Numerator * _fraction.Numerator);		
	result.Denominator = (this->Denominator * _fraction.Denominator);
	return result;
}

Fraction::~Fraction()
{
	if(Comments)
		cout << "Destructor " << endl;
}

//Overloaded Class + Operator
Fraction Fraction::operator+(const Fraction & _fraction)
{

	return Fraction((this->Numerator * _fraction.Denominator) + (this->Denominator * _fraction.Numerator), (this->Denominator * _fraction.Denominator));
}

//Overloaded Class - Operator
Fraction Fraction::operator-(const Fraction & _fraction)
{
	return Fraction((this->Numerator * _fraction.Denominator) - (this->Denominator * _fraction.Numerator), (this->Denominator * _fraction.Denominator));
}

//Overloaded Class / Operator
Fraction Fraction::operator/(const Fraction & _fraction)
{
	return Fraction(this->Numerator * _fraction.Denominator, this->Denominator * _fraction.Numerator);
}

//Overloaded Class * Operator
Fraction Fraction::operator*(const Fraction & _fraction)
{
	return Fraction(this->Numerator * _fraction.Numerator, this->Denominator * _fraction.Denominator);
}

Fraction::operator double()
{
	return double(Numerator) / double(Denominator);
}

Fraction::operator int()
{
	return Numerator /Denominator;
}

Fraction::operator float()
{
	return float(Numerator) / float(Denominator);
}
