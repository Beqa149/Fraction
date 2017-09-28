#include "Fraction.h"
#include<iostream>
using namespace std;


//Default Constructor
Fraction::Fraction()
{
	Denominator = 1;
	Numerator = 0;
}


//Overloaded Constructor
Fraction::Fraction(int Numerator, int Denominator)
{
	/*cout << "Enter Numerator : " << Numerator;
	cout << "Enter Denominator : " << Denominator;*/
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

Fraction Fraction::Subtract(Fraction _fraction)
{
	Fraction result;
	result.Numerator = (this->Numerator * _fraction.Denominator) - (this->Denominator * _fraction.Numerator);
	result.Denominator = (this->Denominator * _fraction.Denominator);
	return result;
}

Fraction Fraction::Divide(Fraction _fraction)
{
	Fraction result;
	result.Numerator = (this->Numerator * _fraction.Denominator);
	result.Denominator = (this->Denominator * _fraction.Numerator);
	return result;
}

Fraction Fraction::Multiply(Fraction _fraction)
{
	Fraction result;
	result.Numerator = (this->Numerator * _fraction.Numerator);		
	result.Denominator = (this->Denominator * _fraction.Denominator);
	return result;
}
