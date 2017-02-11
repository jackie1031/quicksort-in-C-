#include"fracType.h"
#include<iostream>
#include<vector>

//Written by Tianyi Lin and Colin Enders on 2015/11/9
//The class to use quicksort to sort elements

#ifndef H_fracList
#define H_fracList
using namespace std;

class fracList
{
public:

	//Constructor
	fracList();

	//Function to find the partition
	int partition(int first, int last);

	//Function to push fraction to stack
	void pushFraction(fractionType fraction);

	//Function to swap two elements in the array
	void swap(int first, int second);

	//Function to quicksort given first and last element
	void recQuickSort(int first, int last);

	//Function to do a complete quicksort of sortingArray
	void quickSort();

	//Prints out sorted array in ascending order
	void print();

private:
	vector<fractionType> sortingArray;
	int *first; //Variable to store first element
	int *last; //Variable to store last element

};

#endif

