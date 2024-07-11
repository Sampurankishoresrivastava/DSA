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
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    //destructor
    ~Student(){
        cout<<"I delete everthing\n";
        delete cgpaPtr;
    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
    }
};

int main() {
    Student s1(" Sam", 9.1);
    s1.getinfo();
    
    return 0;
}
