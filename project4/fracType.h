#ifndef H_fractionType
#define H_fractionType

// Author: Tianyi Lin
// class fractionType.h
// This class performs 6 relational operations on fractions and overload insertion and extraction operators.

#include <iostream>
using namespace std;

class fractionType
{
	//Overload the stream insertion and extraction operators
	friend ostream& operator<<(ostream&, const fractionType&);
	friend istream& operator>>(istream&, fractionType&);

public:
	//Function to set the fraction numbers according to the parameters.
	//Postcondition: numerator = num; denominator = den;
	void setFraction(const int& num, const int& den);

	//Function to retrieve the fraction. 
	//Postcondition: num = numerator; den = denominator;
	void getFraction(int& num, int& den) const;

	//overload the relational operator
	bool operator== (const fractionType& otherFraction) const;
	bool operator!= (const fractionType& otherFraction) const;
	bool operator<= (const fractionType& otherFraction) const;
	bool operator>= (const fractionType& otherFraction) const;
	bool operator< (const fractionType& otherFraction) const;
	bool operator> (const fractionType& otherFraction) const;

	//Constructor initializes the private data member numerator to 0 and denominator to 1
	fractionType();

	//Constructor initialize the private data members to the values sent in as parameters
	fractionType(int, int);


private:
	int num;		//variable to store the numerator
	int den;		//variable to store the denominator
};

#endif


