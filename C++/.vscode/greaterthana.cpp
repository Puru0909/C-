#include<iostream>
using namespace std;
int main() {
   // int x;
   // cout<<sizeof(x);

   int arr[] = {-10,6,-3,-4,-5}; 
   int n = sizeof(arr)/4;
   int x = 4;
   int count = 0;
   //int mx = INT_MIN;
    for(int i=1; i<n; i++) {
       if(arr[i]>x) count++;  
       //mx = max(mx, arr[i]);
    }
    cout<<count;
}
