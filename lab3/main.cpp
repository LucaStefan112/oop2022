#include <iostream>
#include "Math.hpp"
#include "Canvas.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << Math::Add(1, 2) << '\n';
    cout << Math::Add(1, 2, 3) << '\n';
    cout << Math::Add(1.1, 2.2) << '\n';
    cout << Math::Add(1.1, 2.2, 3.3) << '\n';
    cout << Math::Mul(1, 2) << '\n';
    cout << Math::Mul(1, 2, 3) << '\n';
    cout << Math::Mul(1.1, 2.2) << '\n';
    cout << Math::Mul(1.1, 2.2, 3.3) << '\n';
    cout << Math::Add("123", "5") << '\n';

    Canvas a(30, 30);
    
    a.DrawLine(1, 1, 10, 10, '#');
    a.SetPoint(30, 30, '@');
    a.DrawRect(5, 5, 16, 16, '+');
    a.FillCircle(20, 20, 5, '&	');
    a.Print();
    
    return 0;
}
