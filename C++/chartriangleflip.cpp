#include<iostream>
 using namespace std;
 int main() {
    int m;
    cout<<"enter side of square : ";
    cin>>m;
    for(int i=0; i<m; i++) {
        for(int j=0; j<=m-i+1; j++) {
            cout<<char('A' + j)<<" ";
        }
        cout<<endl;


    }

 }
