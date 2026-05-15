#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(int x) {
        cout << "Parent constructor: " << x << endl;
    }
};

class child: public Parent {
    public:
    child(int x,int y): Parent(x) {
        cout << "Child constructor: " << y << endl;
    }
};

int main()
{
    child c(10,20);
}