#include <iostream>
#include "includes/NumberList.h"
#include "includes/Student.h"
#include "includes/utils.h"

using namespace std;

int main(){

    NumberList listOfNumbers;

    listOfNumbers.Init();

    int n;  cin >> n;

    for(int i = 0; i <= n; i++){
        int x;  cin >> x;
        
        if(!listOfNumbers.Add(x))
            break;
    }

    listOfNumbers.Sort();

    listOfNumbers.Print();

    return 0;
}