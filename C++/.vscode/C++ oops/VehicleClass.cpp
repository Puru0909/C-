#include<iostream>
using namespace std;
class Vehicle {
    public:
    int topSpeed;
    float mileage;
    string fuel;
    
};
class TwoWheeler : public Vehicle{
public:
bool sunroof;
};
class FourWheeler : public Vehicle{
public:

};
class Scooty : public TwoWheeler{
public:
};
class Bike : public TwoWheeler {
public:
};
int main() {
    Vehicle b1;
    b1.topSpeed = 188;
    b1.mileage = 12.5;
    b1.fuel= 6;

}