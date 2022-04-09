#include <iostream>
#include "Cars.h"
#include "Weather.hpp"
#include "Circuit.hpp"

using namespace std;

int main(){

   Circuit c;
   c.SetLength(100);
   c.SetWeather(Weather::Rainy);
   c.AddCar(new Dacia());
   c.AddCar(new Toyota());
   c.AddCar(new Mercedes());
   c.AddCar(new Ford());
   c.AddCar(new Mazda());
   c.Race();
   c.ShowFinalRanks();
   c.ShowWhoDidNotFinish();
    
   return 0;
}
