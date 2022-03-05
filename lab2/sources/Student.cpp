#include "includes/Student.h"
#include <cstring>

// Getters:
char* Student::getName() const {
    return this->name;
}

float Student::getMathGrade() const {
    return this->mathGrade;
}

float Student::getEnglishGrade() const {
    return this->englishGrade;
}

float Student::getHistoryGrade() const {
    return this->historyGrade;
}

float Student::getAverageGrade() const {
    const float averageGrade = (this->englishGrade + this->historyGrade + this->mathGrade) / 3;
    return averageGrade;
}

// Setters:
void Student::setName(char* name){
    strcpy(this->name, name);
}

void Student::setMathGrade(float grade){
    this->mathGrade = grade;
}

void Student::setEnglishGrade(float grade){
    this->englishGrade = grade;
}

void Student::setHistoryGrade(float grade){
    this->historyGrade = grade;
}