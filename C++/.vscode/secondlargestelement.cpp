#include<iostream>
using namespace std;
int main() {
   // int x;
   // cout<<sizeof(x);

   int arr[] = {12,6,7,34,9,23,2,8,3,6,11};
   int n = sizeof(arr)/4;
   int mx = arr[0];
    for(int i=0; i<n; i++) {
       mx = max(mx,arr[i]); 
    }
    int smx = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]!=mx) smx = max(smx,arr[i]);
    }
    cout<<smx;
}
  