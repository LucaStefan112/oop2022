#ifndef Student_hpp
#define Student_hpp

class Student{
    float mathGrade, englishGrade, historyGrade, averageGrade;
    char name[20];
public:
    
//    Getters:
    float getMathGrade();
    float getEnglishGrade();
    float getHistoryGrade();
    float getAverageGrade();
    char* getName();
    
//    Setters:
    bool setMathGrade(float grade);
    bool setEnglishGrade(float grade);
    bool setHistoryGrade(float grade);
    void setName(char* thisName);
};

#endif
