#include<iostream>
using namespace std;
void swap(int* a, int* b) {
int temp = *a;
 *a = *b;
 *b = temp;  //method 1;
}
int main() {
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(&x, &y); 
    cout<<x<<" "<<y<<endl;
} 