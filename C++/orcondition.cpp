#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter n : ";
    cin >> n;
    if(n%5==0 || n%3==0) {
        cout << "divisble by 5 or 3";
    }
    else {
        cout << "not divisble";
    }
}