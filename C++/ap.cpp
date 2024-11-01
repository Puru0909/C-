#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter n : ";
    cin >> n;
    //int a = 4;
    //for(int i=1; i<=n; i++) {
        //cout<<a<<" ";
    //}
    for(int i=1; i<=2*n-1; i+=2) {
        cout<<i<<" ";
    }
}
