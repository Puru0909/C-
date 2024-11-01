#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;
    Student() { //default constructor
 //s2
    }
    Student(int r) {
        rno = r;
    }

    Student(string s, int r, float g) { //parameter constructor
        name = s;
        rno = r;
        gpa = g;
    }
     Student(int r, float g, string s) { //parameter constructor
        name = s;
        rno = r;
        gpa = g;
    }


};
int main() {
    Student s1("raghav Garg",76,8.2);
    // s1.name = "Raghav Garg";
    // s1.rno = 76;
    // s1.gpa = 8.2;
    //cin>>s1.rno;
    Student s5(34,5.3,"Aman");


    Student s2;
    s2.name = "raghav Garg";
    s2.rno = 88;
    s2.gpa = 6.2;

    Student s3("gagan",13,9.2);
    Student s4(85);

    Student s6 = s1; //deep copy
    s6.name = "manish";
    Student s7(s1); //copy constructor
    s7.name = "vijay";

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s5.name<<" "<<s5.gpa<<" "<<s5.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;
    cout<<s6.name<<" "<<s6.gpa<<" "<<s6.rno<<endl;
    cout<<s7.name<<" "<<s7.gpa<<" "<<s7.rno<<endl;
}