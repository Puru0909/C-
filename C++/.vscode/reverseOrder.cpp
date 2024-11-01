#include<iostream>
using namespace std;
int main() {
   // int x;
   // cout<<sizeof(x);

   int a[] = {12,6,7,34,9,23,2,8,3,6,11}; 
   int n = sizeof(a)/4;
   int b[n];
    for(int i=0; i<n; i++) {
      // if(arr[i]>mn) mn = arr[i];  
      b[i] = a[n-1-i];
    }
    for(int i=0; i<n; i++) {
        cout<<b[i]<<" ";
    }
}
