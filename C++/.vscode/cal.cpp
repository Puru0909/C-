#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    
    void circle(float radius) {
        float cf = 2 * 3.14 * radius;
        float area = 3.14 * radius * radius;
        cout << "CircleRadius :  " << radius 
             << ", Circumference : " << cf
             << ", Area : " << area << endl;
    }

    void rectangle(float length, float breadth) {
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);
        cout << "Rectangle - Length: " << length 
             << ", Breadth: " << breadth 
             << ", Area: " << area 
             << ", Perimeter: " << perimeter << endl;
    }
};

int main() {
    
    Calculator calculator1, calculator2;

    
    float r1;
    cout << "Enter the radius of C1: ";
    cin >> r1;
    calculator1.circle(r1);

    
    float r2; 
    cout << "Enter radius for Circle 2: ";
    cin >> r2;
    calculator2.circle(r2);

    
    float length1, breadth1;
    cout << "Enter length and breadth for R1: ";
    cin >> length1 >> breadth1;
    calculator1.rectangle(length1, breadth1);

    
    float length2, breadth2;
    cout << "Enter length and breadth for R2: ";
    cin >> length2 >> breadth2;
    calculator2.rectangle(length2, breadth2);

    return 0;
}
