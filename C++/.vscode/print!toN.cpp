#include<iostream>
using namespace std;
void print(int x, int n) {
    if(x>n) return;
    cout<<x<<endl;
    print(x+1, n);
}
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(1, n);

}
//     if(n>30) return;
//     cout<<n<<endl;
//     print(n+1);
// }
// int main() {
//     print(1);
// }