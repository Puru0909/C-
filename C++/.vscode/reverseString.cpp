#include <iostream>
#include <string>
#include <algorithm>  // Added this header for reverse function

using namespace std;

int main() {
    string s = "raghav";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
