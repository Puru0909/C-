#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter marks : ";
    cin >> n;
    if(n>=81 && n<=100) {
        cout << "very good";
    }
    else if(n>=61 && n<=80) {
        cout << "good";
    }
    else if(n>=41 &&  n<=60) {
        cout << "average";
    }
    if(n<=40) {
        cout << "fail";
    }
}