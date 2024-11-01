 #include<iostream>
 using namespace std;
 int main() {
    int m;
    cout<<"enter side of square : ";
    cin>>m;
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            cout<<2*j-1<<" ";
        }
        cout<<endl;


    }
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=2*i-1; j+=2) {
            cout<<j<<" ";
        }
        cout<<endl;


    }
    for(int i=1; i<=m; i++) {
        int a = 1;
        for(int j=1; j<=i; j++) {
            cout<<a<<" ";
            a += 2;
        }
        cout<<endl;


    }

 }
