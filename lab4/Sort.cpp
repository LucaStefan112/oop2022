#pragma warning(disable:4996)

#include "Sort.h"
#include <iostream>
#include <time.h>
#include <stdarg.h>
#include <cstring>

int stringToNum(char* str) {
	int n = 0, i = 0;
	
	while (str[i])	n = n * 10 + str[i++] - 48;

	return n;
}

Sort::Sort(int n, int min, int max) {
	srand(time(NULL));

	length = n; arr = new int[n];

	for (int i = 0; i < n; i++)
		arr[i] = min + rand() % (max - min + 1);
}

Sort::Sort(int n, int* thisArr) {
	length = n;	arr = thisArr;
}

Sort::Sort(int n, ...) {
	va_list args;
	va_start(args, n);

	length = n;	arr = new int[n];

	for (int i = 0; i < n; i++)
		arr[i] = va_arg(args, int);

	va_end(args);
}

Sort::Sort(char* thisArr) {
	
	if (thisArr == nullptr)	return;

	for (int i = 0; thisArr[i]; i++)
		if (thisArr[i] == ',')
			length++;

	length++;	arr = new int[length];
	int i = 0;

	char* p = strtok(thisArr, ",");

	while (p) {
		arr[i++] = stringToNum(p);
		p = strtok(NULL, ",");
	}
}

void Sort::BubblreSort(bool ascendent) {
	for (int i = 0; i < length - 1; i++)
		for (int j = i + 1; j < length; j++)
			if (arr[i] > arr[j] && ascendent || arr[i] < arr[j] && !ascendent)
				std::swap(arr[i], arr[j]);
}

void Sort::InsertSort(bool ascendent) {
	this->BubblreSort(ascendent);
}

void Sort::QuickSort(bool ascendent) {
	this->BubblreSort(ascendent);
}

void Sort::Print() {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}

int Sort::getElementCount() {
	return length;
}

int Sort::GetElementFromIndex(int index) {
	return arr[index];
}