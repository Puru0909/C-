#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
};
void print(Car c) {
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}
void change(Car& c) {
    c.name = "Audi A8";
}
int main() { 
    // int x = 4;
    // cout<<x<<endl;
    // change(x);
    // cout<<x<<endl;
    Car c1;
    c1.name = "honda city";
    c1.price = 15000;
    c1.seats = 5;
    c1.type = "serdan";

    print(c1);
    change(c1);
    print(c1);


    Car c2;
    c2.name = "Swift";
    c2.price = 1500088;
    c2.seats = 5;
    c2.type = "Hatchback";

   //  cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.seats<<endl;
   print(c1);
   print(c2);

}