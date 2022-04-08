#pragma once
class Sort{

	int* arr = nullptr;
	int length = 0;

public:
	Sort(int n, int min, int max);
	Sort(int n, int* thisArr);
	Sort(int n, ...);
	Sort(char* thisArr);
	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubblreSort(bool ascendent = false);
	void Print();
	int getElementCount();
	int GetElementFromIndex(int index);
};

