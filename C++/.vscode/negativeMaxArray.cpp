#include<iostream>
using namespace std;
int main() {
   // int x;
   // cout<<sizeof(x);

   int arr[] = {-10,-2,-3,-4,-5}; 
   int n = sizeof(arr)/4;
   int mx = arr[0];
   //int mx = INT_MIN;
    for(int i=1; i<n; i++) {
       if(arr[i]>mx) mx = arr[i];  
       //mx = max(mx, arr[i]);
    }
    cout<<mx;
}
