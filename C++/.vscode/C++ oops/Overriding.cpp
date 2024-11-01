#include<iostream>
#include<vector>
using namespace std;
class Scooty {
    
    public:
    int topSpeed;
    float mileage;
    virtual void sound() {
        cout<<"Vroom Vroom"<<endl;
    }
    private:
    int bootSpace;
};
class Bike : public Scooty{
    public:
    int gears;
    void sound() {
        cout<<"dhroom dhroom"<<endl;
    }
};
class SuperBike : public Scooty{//child class
public:
void sound(){
    cout<<"Zroom Zroom"<<endl;
}
};
int main() {
//    Bike* b = new Bike();
//    b->sound();


//     Bike b;
//     b.sound();
//     Scooty s;
//     s.sound();

// 

  Scooty* b = new Bike();
  b->sound();
  Scooty* c = new SuperBike();
  c->sound();
  vector<Scooty*> v;


}