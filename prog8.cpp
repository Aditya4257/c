#include<iostream>
using namespace std;

class MyClass
{
public:
    int data = 50;
    string name = "AEC";

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Data = " << data << endl;
    }
};

int main()
{
    MyClass obj;
    obj.display();

    cout << endl;
    MyClass* ptr = new MyClass();
    ptr->display();

    delete ptr; 

    return 0;
}