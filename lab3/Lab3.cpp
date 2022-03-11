#include <iostream>
#include "Canvas.h"

using namespace std;

int main(){
	Canvas a(100, 100);

	a.DrawCircle(1, 1, 10, 'a');

	a.Print();

	return 0;
}