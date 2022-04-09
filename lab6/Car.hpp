#ifndef Car_hpp
#define Car_hpp

class Car{
protected:
    float fuel_capacity = 0, fuel_consumption = 0, average_speed = 0;
    virtual void Init() = 0;
};


#endif
