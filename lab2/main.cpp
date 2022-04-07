#include <iostream>
#include "NumberList.hpp"
#include "Student.hpp"
#include "Utils.hpp"

using namespace std;

int main(){

    NumberList a;
    
    a.Init();
    
    for(int i = 0; i < 20; i++)
        a.Add(20 - i);

    a.Sort();

    a.Print();
    
//////////////////////////////////////////////////////////////////////////////
    
    char n1[20] = "Ana", n2[20] = "Maria";
    Student s1, s2;

    s1.setName(n1);
    s1.setMathGrade(10);
    s1.setEnglishGrade(9);
    s1.setHistoryGrade(8);
    
    s2.setName(n2);
    s2.setMathGrade(8);
    s2.setEnglishGrade(9);
    s2.setHistoryGrade(10);
    
    cout << compareMathGrade(s1, s2) << '\n';
    cout << compareEnglishGrade(s1, s2) << '\n';
    cout << compareHistoryGrade(s1, s2) << '\n';
    cout << compareAverageGrade(s1, s2) << '\n';
    cout << compareName(s1, s2) << '\n';
    
    return 0;
}
