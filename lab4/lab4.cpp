#include <iostream>
#include "Sort.h"

int main() {

    int arr[] = { 1, 8, 3, 7, 34, 7, 7, 2, 4 };
    char str[] = "5,12,8,34,9,12,5,2,7,3";
    
    Sort a(10, 1, 100);
    a.Print();
    a.BubblreSort();
    a.Print();
    std::cout << '\n';

    Sort b(9, arr);
    b.Print();
    b.BubblreSort(true);
    b.Print();
    std::cout << '\n';

    Sort c(5, 3, 5, 1, 3, 2);
    c.Print();
    c.BubblreSort();
    c.Print();
    std::cout << '\n';

    Sort d(str);
    d.Print();
    d.BubblreSort(true);
    d.Print();

    return 0;
}