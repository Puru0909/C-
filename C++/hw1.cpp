 
 #include<iostream>
 using namespace std;
 int main() {
    char m;
    cout<<"enter side of square : ";
    cin>>m;
    for(char i='A'; i<=m; i++) {
        for(char j='A'; j<=m; j++) {
            cout<<char(i)<<" ";
        }
        cout<<endl;


    }

 }
