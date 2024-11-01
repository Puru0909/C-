#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s = "raghav";
    cout << s << endl;

    // Reverse the first 3 characters of the string
    reverse(s.begin(), s.begin() + 3);
    
    // Output the modified string
    cout << s << endl;

    return 0;
}

    // int n = s.length();
    // int i = 0;
    // int j = n/2 - 1;
    // while(i<j) {
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    