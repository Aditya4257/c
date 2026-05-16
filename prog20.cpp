#include<iostream>
using namespace std;

template <typename T>
T addition(T a, T b)
{
    return a+b;
}
int main()
{
    cout<<addition(10,20)<<endl;
    cout<<addition(4.5,6.5);

    return 0;
}