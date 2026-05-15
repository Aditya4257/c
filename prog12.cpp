#include<iostream>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout<<"This is parent class method"<<endl;
    }
};

class Child1 : virtual public Parent
{
public:
    void display()
    {
        cout<<"This is child class 1"<<endl;
    }
};

class Child2 : virtual public Parent
{
public:
    void result()
    {
        cout<<"This is child class 2"<<endl;
    }
};

class Child3 : public Child1, public Child2
{
public:
    
    {
        
    }
};

int main()
{
    Child3 obj;

    obj.display();
    obj.result();
    obj.show();

    return 0;
}