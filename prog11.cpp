#include<iostream>
using namespace std;

class Human
{
public:
    void walk()
    {
        cout<<"Human is walking"<<endl;
    }
};
class Person: public Human
{
    public:
    void run()
    {
        cout<<"Person can run"<<endl;
    }  
};
class Student: public Person
{
    public:
    void study()
    {
        cout<<"Student is studying"<<endl;
    }
}; 
int main()
{
    Student s;
    s.walk();
    s.run();
    s.study();
    return 0;
}     