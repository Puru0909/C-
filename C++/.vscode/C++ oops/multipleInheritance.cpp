#include<iostream>
using namespace std;
class Cricketer {
    public:
    int runs;
    int wickets;
    int average;
};
class Engineer {
    public:
    int experience;
    string domain;
};
class Phodu : public  Engineer,Cricketer {
    public: //multiple inheirtance
    string name;
};
int main() {

}