#include<iostream>
using namespace std;
class Student {
    public:
    int rno;
    string name;
    Student() {

    }
    Student(int r, string n, float m) {
        rno = r;
        name = n;
        marks = m;
    }
    float getMarks() {
        return marks;
    }
    // void setMarks(float m) {
    //     marks = m;
    // }
    private:
    float marks;
};
int main() {
    Student s1(76,"Raghav",92.2);
    cout<<s1.getMarks()<<endl;
   // s1.setMarks(98.5);
  //  s2.marks = 56.4;
}