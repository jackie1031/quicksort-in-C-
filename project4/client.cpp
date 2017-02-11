//Client program to sort fractions
//Written by Tianyi Lin on 11/10/2015

#include <iostream>

#include "fracType.h"
#include"fracList.h"

using namespace std;

int main()

{
	//create variables 
	fractionType fraction;
	fracList needToSort;

	int numToSort;
	int i = 0; //counter

	//get number of fractions to sort
	cout << "How many fractions do you want to sort?" << endl;
	cin >> numToSort;

	//Input all fractions and push to stack
	cout << "Please enter the fraction in the form of a/b : ";
	for (i = 0; i < numToSort; i++)
	{
		cin >> fraction; //Get fraction input
		needToSort.pushFraction(fraction); //Push to vector
	}

	needToSort.quickSort(); //Sort the elements
	needToSort.print(); //Print out all elements

	return 0; //Exit
}


