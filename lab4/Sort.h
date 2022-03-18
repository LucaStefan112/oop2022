#pragma once
class Sort
{
    int* arr;
    int numberOfElements = 0;
public:

    Sort(int thisNumberOfElements, int minimum, int maximum);

    Sort(int* thisArr, int thisNumberOfElements);

    Sort(int thisNumberOfElements, ...);

    void SortArray(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);
};

