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
    void print(int a) {
    cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    cout<<a<<endl;
}
int matches() {
    return runs/avg;
}
};

int main() {
    Cricketer c1("virat Kohli",25000,55.2);
    Cricketer c2("rohit sharma",18000,47.8);

    // cout<<c1.name<<" "<<c1.runs<<c1.avg<<endl;
    // cout<<c2.name<<" "<<c2.runs<<c2.avg<<endl;
    // print(c1);
    // print(c2);
    //c1.name = "Sachin";
    c1.print(5);
    c2.print(9);
    cout<<c1.matches()<<endl;
     cout<<c2.matches()<<endl;

}