#include<iostream>
using namespace std;
void change(int arr[]) {
    arr[0] = 9;
}
// void change(int x) {
//     x = 8;
// }
int main() {
int arr[3] = {1,2,3};
for(int i=0; i<=2; i++) {
    cout<<arr[i]<<" ";
}
cout<<endl;
change(arr);
arr[0] = 9;
for(int i=0; i<=2; i++) {
    cout<<arr[i]<<" ";
}


    // int x = 3;
    // cout<<x<<endl;
    // change(x); //pass by value
    // cout<<x<<endl;
}