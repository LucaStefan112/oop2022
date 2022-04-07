#include "Math.hpp"
#include <stdarg.h>
#include <cstring>
#include <iostream>

int Math::Add(int a, int b){
    return a + b;
}

int Math::Add(int a, int b, int c){
    return a + b + c;
}

int Math::Add(double a, double b){
    return int(a + b);
}

int Math::Add(double a, double b, double c){
    return int(a + b + c);
}

int Math::Mul(int a, int b){
    return a * b;
}

int Math::Mul(int a, int b, int c){
    return a * b * c;
}

int Math::Mul(double a, double b){
    return int(a * b);
}

int Math::Mul(double a, double b, double c){
    return int(a * b * c);
}

int Math::Add(int count, ...){
    va_list args;
    va_start(args, count);
    
    int s = 0;
    for(int i = 0; i < count; i++)
        s += va_arg(args, int);
    
    va_end(args);
    
    return s;
}

char* Math::Add(const char* a, const char* b){
    
    if(a == nullptr || b == nullptr)
        return nullptr;
    
    int lga = int(strlen(a)), lgb = int(strlen(b));
    int lgmax = std::max(lga, lgb) + 1;
    
    char* s = new char[lgmax];
    for(int i = 0; i < lgmax; i++) s[i] = '0';
    
    lga--; lgb--; lgmax--;
    
    while(lga > -1 || lgb > -1){
        
        if(lga > -1){
            s[lgmax] += (a[lga] - '0');
            if(s[lgmax] > '9'){
                s[lgmax - 1]++;
                s[lgmax] = '0' + (s[lgmax] - '0') % 10;
            }
            
            lga--;
        }
        
        if(lgb > -1){
            s[lgmax] += (b[lgb] - '0');
            if(s[lgmax] > '9'){
                s[lgmax - 1]++;
                s[lgmax] = '0' + (s[lgmax] - '0') % 10;
            }
            lgb--;
        }
        lgmax--;
    }
    
    if(s[0] == '0') strcpy(s, s + 1);
    
    return s;
}
