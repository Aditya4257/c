#include<iostream>
using namespace std;

template<typename T>
class Student
{
private:
    T roll;
    T name;
public:
    Student(T r, T n)
    {
        roll=r;
        name=n;    
    }
    T getRoll(T r)
    {
        return r;
    }
    T getName(T s)
    {
        return s;
    }
};

int main()