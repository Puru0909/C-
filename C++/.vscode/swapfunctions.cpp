#include<iostream>
using namespace std;
void swap(int& x, int& y) {
int temp = x;
 x = y;
 y = temp;  //method 1;
}
int main() {
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(x, y); 
    cout<<x<<" "<<y<<endl;
}