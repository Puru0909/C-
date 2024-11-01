#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;

};
int main() {
    Student s1;
    s1.name = "Raghav Garg";
    s1.rno = 76;
    s1.gpa = 8.2;
    //cin>>s1.rno;

    Student s2;
    s2.name = "raghav Garg";
    s2.rno = 88;
    s2.gpa = 6.2;

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
}