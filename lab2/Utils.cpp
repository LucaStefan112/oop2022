#include "Utils.hpp"
#include <math.h>
#include <cstring>

int compareMathGrade(Student a, Student b){
    float gradeA = a.getMathGrade(), gradeB = b.getMathGrade();
    if(gradeA - gradeB < 0)     return -1;
    if(gradeA - gradeB == 0)    return 0;
    return 1;
}

int compareEnglishGrade(Student a, Student b){
    float gradeA = a.getEnglishGrade(), gradeB = b.getEnglishGrade();
    if(gradeA - gradeB < 0)     return -1;
    if(gradeA - gradeB == 0)    return 0;
    return 1;
}

int compareHistoryGrade(Student a, Student b){
    float gradeA = a.getHistoryGrade(), gradeB = b.getHistoryGrade();
    if(gradeA - gradeB < 0)     return -1;
    if(gradeA - gradeB == 0)    return 0;
    return 1;
}

int compareAverageGrade(Student a, Student b){
    float gradeA = a.getAverageGrade(), gradeB = b.getAverageGrade();
    if(gradeA - gradeB < 0)     return -1;
    if(gradeA - gradeB == 0)    return 0;
    return 1;
}

int compareName(Student a, Student b){
    int dif = strcmp(a.getName(), b.getName());
    
    if(dif < 0)     return -1;
    if(dif == 0)    return 0;
    return 1;
}
