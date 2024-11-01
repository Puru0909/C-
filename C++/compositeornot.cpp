#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    bool flag = true;
    
    // Edge case for number 1
    if (n == 1) {
        cout << "Neither prime nor composite";
        return 0;
    }
    
    // Check for factors from 2 to n/2
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            flag = false;
            break;
        }
    }
    
    // Determine if n is prime or composite
    if(flag) 
        cout << "Prime";
    else 
        cout << "Composite";
        
    return 0;
}
