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
    if(a>c) {
        if(a>c) {
        cout << a << " is gretest";
    }
    else {
        cout << c << " is greatest";
    }
}
else {
    if(b>c) {
        cout << b << " is greatest";
    }
    else {
       cout << c << " is greatest"; 
    }

}
}