#include "Sort.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <cstdarg>

Sort::Sort(int thisNumberOfElements, int minimum, int maximum)
{
	srand(time(NULL));

	numberOfElements = thisNumberOfElements;

	arr = new int [thisNumberOfElements];

	for (int i = 0; i < numberOfElements; i++)
		arr[i] = (rand() + minimum) % maximum;
}

Sort::Sort(int* thisArr, int thisNumberOfElements)
{
	numberOfElements = thisNumberOfElements;
	
	arr = new int(thisNumberOfElements);

	for (int i = 0; i < numberOfElements; i++)
		arr[i] = thisArr[i];
}

Sort::Sort(int thisNumberOfElements, ...)
{
	numberOfElements = thisNumberOfElements;
	
	arr = new int[thisNumberOfElements];

	va_list x;
	va_start(x, thisNumberOfElements);

	for (int i = 0; i < thisNumberOfElements; i++)
		arr[i] = va_arg(x, int);

	va_end(x);
}

void Sort::SortArray(bool ascendent)
{
	for (int i = 0; i < numberOfElements - 1; i++)
		for (int j = i + 1; j < numberOfElements; j++)
			if (arr[i] < arr[j] && !ascendent || arr[i] > arr[j] && ascendent)
				std::swap(arr[i], arr[j]);
}

void Sort::Print()
{
	for (int i = 0; i < numberOfElements; i++)
		std::cout << arr[i] << ' ';
}

int Sort::GetElementsCount()
{
	return numberOfElements;
}

int Sort::GetElementFromIndex(int index) {
	return arr[index];
}