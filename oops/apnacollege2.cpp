// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;//pointer

    Student(string name, double cgpa){
        this->name=name;
        // this->cgpa=cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &oriobj){
        this->name=oriobj.name;
        // this->cgpaPtr= oriobj.cgpaPtr; // shallow copy
        cgpaPtr = new double;
        *cgpaPtr= *oriobj.cgpaPtr;
    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
    }
};

int main() {
    Student s1(" Sam", 9.1);
    // s1.getinfo();
    Student s2(s1);
    s1.getinfo();
    *(s2.cgpaPtr)= 9.5;
    s1.getinfo();
    s2.name="Neha";
    s2.getinfo();
    return 0;
}
