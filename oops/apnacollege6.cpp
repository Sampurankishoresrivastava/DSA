// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    virtual void draw()= 0;
};

class Circle : public Shape  {
public:
    void draw(){
        cout<<"drawing a circle\n";
    }
};


int main() {
    Circle c1;
    c1.draw();
    return 0;
}
