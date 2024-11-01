#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "enter 1 side : "; 
    cin >> a;
    cout << "enter 2 side : ";
    cin >> b;
    cout << "enter 3rd side :";
    cin >> c;
    if(a>b && a>c) {
        cout <<a<< " is big";
    }
    else if(b>a && b>c) {
        cout <<b<< " is big";

    }
    else {
        cout <<c<< " is big";
    }
}