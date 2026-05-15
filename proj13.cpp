#include<iostream>
using namespace std;

class College
{
private:
    int roll=23;
    double marks=78.90;
public: 
    void result()
    {
        cout<<" "<<roll<<endl;
    }
};
int main()
{
    College c1;
    // cout<<c1.roll;
    c1.result();
    return 0;
}    