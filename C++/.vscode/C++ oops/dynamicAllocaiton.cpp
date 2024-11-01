#include<iostream>
using namespace std;
class Cricketer {
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;

    }

};

int main() {
    Cricketer c1("virat Kohli",25000,55.2);
    // Cricketer c2("rohit sharma",18000,47.8);
    Cricketer* c2 = new Cricketer("rohit sharma",18000,47.8);
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<(*c2).name<<" "<<(*c2).runs<<endl; //same as below
    //cout<<c2->name<<" "<<c2->runs<<endl;
    
 

    int* ptr = new int(5245);
    cout<<*ptr<<endl;

    // int x = 6;
    // cout<<x<<endl;
    // int* ptr = &x;
    // cout<<*ptr<<endl;
    


}