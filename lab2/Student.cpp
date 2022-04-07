#include "Student.hpp"
#include <cstring>

float Student::getMathGrade(){
    return mathGrade;
}

float Student::getEnglishGrade(){
    return englishGrade;
}

float Student::getHistoryGrade(){
    return historyGrade;
}

float Student::getAverageGrade(){
    return averageGrade;
}

char* Student::getName(){
    return name;
}

bool Student::setMathGrade(float grade){
    if(!(0 <= grade && grade <= 10))    return false;
    mathGrade = grade;
    return true;
}

bool Student::setEnglishGrade(float grade){
    if(!(0 <= grade && grade <= 10))    return false;
    englishGrade = grade;
    return true;
}

bool Student::setHistoryGrade(float grade){
    if(!(0 <= grade && grade <= 10))    return false;
    historyGrade = grade;
    return true;
}

void Student::setName(char* thisName){
    strcpy(name, thisName);
}
