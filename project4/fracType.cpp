//Implementation file for fractionType
//Written by Tianyi Lin on 9/16/2015

#include<iostream>
#include "fracType.h"

using namespace std;

//Overload the stream insertion and extraction operators
ostream& operator<<(ostream&osObject, const fractionType& fraction)

{
	osObject << fraction.num;
	osObject << "/";
	osObject << fraction.den;

	return osObject;    //return the ostream object
}

istream& operator>>(istream& isObject, fractionType& fraction)
{
	char ch;
	isObject >> fraction.num;
	isObject >> ch;
	isObject >> fraction.den;

	return isObject;    //return the istream object
}

//Function to set the fraction numbers according to the parameters
void fractionType::setFraction(const int& numerator, const int& denominator)
{
	num = numerator;
	den = denominator;
}

//Function to retrieve the fraction 
void fractionType::getFraction(int& numerator, int& denominator) const
{
	numerator = num;
	denominator = den;
}


bool fractionType:: operator==(const fractionType& otherFraction) const

{

	return (num * otherFraction.den == den * otherFraction.num);

}

bool fractionType:: operator!=(const fractionType& otherFraction) const

{

	return (num * otherFraction.den != den * otherFraction.num);

}

bool fractionType:: operator<=(const fractionType& otherFraction) const

{

	return (num * otherFraction.den <= den * otherFraction.num);

}

bool fractionType:: operator>=(const fractionType& otherFraction) const

{

	return (num * otherFraction.den >= den * otherFraction.num);

}

bool fractionType:: operator<(const fractionType& otherFraction) const

{

	return (num * otherFraction.den < den * otherFraction.num);

}

bool fractionType:: operator>(const fractionType& otherFraction) const

{

	return (num * otherFraction.den > den * otherFraction.num);

}

//Initialize num to 0 and den to 1
fractionType::fractionType()
{
	num = 0;
	den = 1;
}

//Give value to the parameters unless the denominator is 0
fractionType::fractionType(int a, int b)
{
	num = a;

	if (b != 0)
	{
		den = b;
	}
	else
		den = 1;

}

