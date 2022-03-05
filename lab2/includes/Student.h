class Student{

    char* const name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:

    // Getters:
    char* getName() const;
    float getMathGrade() const;
    float getEnglishGrade() const;
    float getHistoryGrade() const;
    float getAverageGrade() const;
    
    // Setters:
    void setName(char* name);
    void setMathGrade(float grade);
    void setEnglishGrade(float grade);
    void setHistoryGrade(float grade);
};