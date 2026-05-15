#include<iostream>
#include<string>
using namespace std;

class Academic
{
private:
    int roll;
    string name;
    string department;

public:
    int getRoll()
    {
        return this->roll;
    }  
    void setRoll(int roll)
    {
        this->roll=roll;
    } 
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name=name;
    }
    string getDepartment()
    {
        return this->department;
    }
    void setDepartment(string department)
    {
        this->department=department;
    }
};

int main()
{
    Academic obj;
    obj.setRoll(123);
    obj.setName("Ankit");
    obj.setDepartment("CSE");

    cout<<obj.getRoll()<<endl;
    cout<<obj.getName()<<endl;
    cout<<obj.getDepartment()<<endl;

    return 0;
}