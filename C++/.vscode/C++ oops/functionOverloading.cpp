#include<iostream>
using namespace std;
class Loading {
    public:
    void sum(string a, string b) {
        cout<<a+b<<endl;
    }
    void sum(int a, int b) {
        cout<<a+b<<endl;
    }
    void sum(int a, int b, int c) {
        cout<<a+b+c<<endl;
    }
    // int sum(int a, int b) {
    //     return a+b;
    // }
};
int main() {
    Loading a;
    a.sum(5,8);
    a.sum(4,9,2);
    a.sum("raghav", "garg");
}