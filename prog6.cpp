#include<iostream>
using namespace std;

  double myCalculation(double length,double breadth)
    {
        double result=length*breadth;
        return result;  
    }
    int main()
    {
        double area;
        area=myCalculation(5.0,3.0);
        cout<<"Area="<<area;    
        return 0;
    }
