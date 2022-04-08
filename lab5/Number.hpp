#ifndef Number_hpp
#define Number_hpp

#include <stdio.h>

class Number{
    char* number = nullptr;
    int base = 0;
    
public:
    Number(const char * value, int base);
    ~Number();
    Number(int nr);

    void SwitchBase(int newBase);
    void Print();
    int  GetDigitsCount();
    int  GetBase();
    
    char operator [](int position);
    Number operator +(Number a);
    Number operator -(Number a);
    Number operator =(Number a);
    Number operator =(int a);
    Number& operator =(const char* a);
    bool operator >(Number a);
    Number& operator +=(int a);
    Number operator +=(Number x);
    Number& operator --(int);
    Number& operator --();
};
#endif
