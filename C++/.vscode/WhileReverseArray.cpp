#include<iostream>
using namespace std;
int main() {
   // int x;
   // cout<<sizeof(x);

   int a[] = {12,6,7,34,9,23,2,8,3,6,11}; 
   int n = sizeof(a)/4;
   for(int i=0; i<n; i++) {
    cout<<a[i]<<" ";
   }
   int i =0;
   int j = n-1;
   while(i<j) {
    int temp = a[i];
    a[i] = a[j];
    i++;
    j--;
   }
    cout<<endl;
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
}


