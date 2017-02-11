//Code for function partition, swap, recQuickSort, quickSort is written by D.S.Malik, given in
//the book "Data structures using C++"
//Rest of the code written by Tianyi Lin and Collin Enders on 2015/11/9

#include<iostream>
#include<vector>
#include "fracList.h"

using namespace std;
//Function to push fraction to stack
void fracList::pushFraction(fractionType fraction)
{
	sortingArray.push_back(fraction);
}

//Function to find the partition
int fracList::partition(int first, int last)
{
	fractionType pivot;
	int index, smallIndex;
	swap(first, (first + last) / 2);
	pivot = sortingArray[first];
	smallIndex = first;
	for (index = first + 1; index <= last; index++)
		if (sortingArray[index] < pivot)
		{
			smallIndex++;
			swap(smallIndex, index);
		}
	swap(first, smallIndex);
	return smallIndex;
}

//Function to swap two elements in the array
void fracList::swap(int first, int second)
{
	fractionType temp;
	temp = sortingArray[first];
	sortingArray[first] = sortingArray[second];
	sortingArray[second] = temp;
}

//Function to quicksort given first and last element
void fracList::recQuickSort(int first, int last)
{
	int pivotLocation;
	if (first < last)
	{
		pivotLocation = partition(first, last);
		recQuickSort(first, pivotLocation - 1);
		recQuickSort(pivotLocation + 1, last);
	}
}

//Function to do a complete quicksort of sortingArray
void fracList::quickSort()
{
	recQuickSort(0, sortingArray.size() - 1);
}

//Prints out sorted array in ascending order
void fracList::print()
{
	cout << endl;
	cout << "After sorting, the list of fractions from small to large: " << endl;
	for (unsigned i = 0; i < sortingArray.size(); i++)
	{
		cout << sortingArray[i] << endl;
	}
}

//Constructor initializes first and last to NULL
fracList::fracList()
{
	first = NULL;
	last = NULL;
}