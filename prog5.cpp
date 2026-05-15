#include<iostream>
#include<string>
using namespace std; 

namespace College
{
    namespace Department
    {
        string dept="CSE";
    }
}
int main()
{
    cout<<"Department="<<College::Department::dept;
    return 0;
}