// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
   
};

class Teacher  {
public:
    string subject;
    double salary;

};

class TA  :  public Student, public Teacher{
public:
//     string researcharea;

    void getinfo(){
        cout<<"name : "<< name<<endl;
        cout<<"rollno : "<< rollno<<endl;
        cout<<"Subject "<< subject<<endl;
        cout<<"salary: "<< salary<<endl;
    }
};

int main() {
    TA s1;
    s1.name="Sam";
    s1.salary=21;
    s1.rollno=2;
    s1.subject="AI";

    s1.getinfo();
    return 0;
}
