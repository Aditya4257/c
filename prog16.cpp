#include<iostream>
using namespace std;

class Students
{
public:
    virtual void study()=0;
};  
class person: public Students
{ 
    public:
        void study() override
    {
        cout<<"Person is studying"<<endl;
    }
};

int main()
{
    person p;
    p.study();
    return 0;
}

// or
// int main()
// { 
//     p.study();
//     Students* a=&p;
//     a->study();

//     return 0;
// }
