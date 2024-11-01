#include<iostream>
using namespace std;
int main() {
    int cp;
    cout << "enter cost price : ";
    cin >> cp;
    int sp;
    cout << "enter selling price : ";
    cin >> sp;
    if(sp>cp) {
    cout << "profit";
    }
    else if(sp<cp) {
        cout<<"loss";
    }
    else {
        cout << "no profit no loss";
    }
}
