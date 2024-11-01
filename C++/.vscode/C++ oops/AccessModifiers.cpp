#include<iostream>
using namespace std;
class Student {
    public:
    int rno;
    string name;
    Student() {

    }
    Student(int rno, string name, float marks) {
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    private:
    float marks;
};
int main() {
    Student s1(76,"Raghav",92.2);
    Student s2;
    s2.rno = 88;
    s2.name = "hikmanshu";
  //  s2.marks = 56.4;
}