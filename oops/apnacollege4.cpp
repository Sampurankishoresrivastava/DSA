// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age){
        this->name=name;
        this->age=age;
    }

   
};

class Student  :  public Person {
    //name, age. rollno
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno=rollno;
    }
    
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};

int main() {
    Student s1("Sam", 21, 2);
    s1.getinfo();
    return 0;
}
