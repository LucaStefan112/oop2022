#include "Number.hpp"
#include <string.h>
#include <iostream>

Number::Number(const char *chr, int thisBase){
    base = thisBase;
    number = new char[200];
    strcpy(number, chr);
}

Number::Number(int nr){
    base = nr;
}

Number::~Number(){
    delete this;
}

void Number::SwitchBase(int newBase){
    int nr = 0, i = 0;
    while(number[i]) i++;

    i--;
    
    while(i > -1){
        nr = nr * base + number[i--] - 48;
    }
    i = 0;
    strcpy(number, ""); base = newBase;
    
    while(nr){
        number[i++] = char(nr % base + 48);
        nr /= base;
    }
    
    number[i] = '\0';
    
    for(int j = 0; j < i / 2; j++)
        std::swap(number[j], number[i - j - 1]);
}

void Number::Print(){
    std::cout << number << '\n';
}

int Number::GetDigitsCount(){
    int nr = 0;
    while(number[nr++]);
    
    return nr-1;
}

int Number::GetBase(){
    return base;
}

char Number::operator [](int position){
    return number[position];
}

Number Number::operator +(Number a){
    Number c(this->number, this->GetBase() + a.GetBase());
    
    return c;
}

Number Number::operator -(Number a){
    Number c(this->number, this->GetBase() - a.GetBase());
    
    return c;
}

Number Number::operator =(Number a){
    return a;
}

Number Number::operator =(int a){
    Number x("loool", a);
    
    return x;
}

Number& Number::operator =(const char* a){
    strcpy(number, a);
    
    return (*this);
}

bool Number::operator >(Number a){
    return this->base > a.base;
}

Number& Number::operator +=(int a){
    base += a;
    return (*this);
}

Number Number::operator +=(Number x){
    
    return x;
}

Number& Number::operator --(int){
    base--;
    
    return (*this);
}

Number& Number::operator --(){
    base--;
    
    return (*this);
}
