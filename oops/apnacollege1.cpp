// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Teacher {
    //properties / attributes
private:
    double salary; 

public:
    string name;
    string dept;
    string subject;

    //construtor
    //non-parameterised
    // Teacher(){
    //     // cout<<"Hi my name is Sam \n";
    //     dept="Cs";
    // }

    //parameterised
    Teacher(string name, string dept, string subject, double salary){
        this->name =name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

    //copy constructor
    Teacher(Teacher &orgiobj){ // call by reference
        cout<<"I am custome copy constructor..............\n"<<endl;;
        this->name= orgiobj.name;
        this->dept= orgiobj.dept;
        this->subject= orgiobj.subject;
        this->salary= orgiobj.salary;
    }

    //method /  member funtions
    void changeDept(string newdept){
        dept = newdept;
    }

    //setter
    // void setSalary(double s){
    //     salary =s;
    // }

    //getter
    // double getSalary(){
    //     return salary;
    // }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }
};


// class  Account{
// private:
//     double balance;
//     string password; // data hiding

// public:
//      string accountId;
//     string username;

// };

int main() {
    // Write C++ code here
    // Teacher t1;// construtor call
    Teacher t1("Sam", "IT", "Cpp", 25000);
    // Teacher t2;
    // t1.name="Sam";
    // t1.dept="IT";
    // t1.subject="Cs";
    // t1.salary=10000;

    // t1.setSalary(25000);

    // cout<< t1.dept<<endl;
    // cout<< t1.getSalary()<<endl;
    // t1.getInfo();

    // Teacher t2(t1); //default copy constructor - invoke 
    Teacher t2(t1); //custome copy constructor - invoke 
    t2.getInfo();
    return 0;
}
