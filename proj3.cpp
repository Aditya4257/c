#include<iostream>
using namespace std;   
namespace myData
{
    int x=20;
    void getData()
    {
        cout<<"Enter value:"<<endl;
        cin>>x;
    }
    void displayData()
    {
        cout<<"Value="<<x;
    }
}

int main()
{
    myData::getData();
    myData::displayData();
    return 0;
}