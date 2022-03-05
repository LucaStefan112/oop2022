#include <cstring>
#include "includes/utils.h"

short int const compareStudentsName(Student* s1, Student* s2){
    int const value = strcmp(s1->getName(), s2->getName());

    if(value > 0)   return 1;
    else if(value < 0)  return -1;
    return 0;
}

short int const compareStudentsMathGrade(Student* s1, Student* s2){
    int const value = s1->getMathGrade() - s2->getMathGrade();

    if(value > 0)   return 1;
    else if(value < 0)  return -1;
    return 0;
}

short int const compareStudentsEnglishGrade(Student* s1, Student* s2){
    int const value = s1->getEnglishGrade() - s2->getEnglishGrade();

    if(value > 0)   return 1;
    else if(value < 0)  return -1;
    return 0;
}

short int const compareStudentsHistoryGrade(Student* s1, Student* s2){
    int const value = s1->getHistoryGrade() - s2->getHistoryGrade();

    if(value > 0)   return 1;
    else if(value < 0)  return -1;
    return 0;
}

short int const compareStudentsAverageGrade(Student* s1, Student* s2){
    int const value = s1->getAverageGrade() - s2->getAverageGrade();

    if(value > 0)   return 1;
    else if(value < 0)  return -1;
    return 0;
}