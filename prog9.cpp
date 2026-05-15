#include<iostream>
using namespace std;

class Human
{
public:
    int roll;
    string name;
    Human(int r,string n)
    {
        roll=r;
        name=n;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<roll;
    }
};
int main()
{
    Human h(123,"Ankit");
    h.display();
    return 0;
}
 
    
