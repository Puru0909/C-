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
    if(a+b>c && b+c>a && c+a>b) {
        cout << "valid triangle";
    }
    else {
        cout << "invalid trianlg";

    }
}