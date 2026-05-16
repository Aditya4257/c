#include<iostream>
using namespace std;

template <typename T>
T swapping(T& a, T& b)
{
    T c;
    c = a;
    a = b;
    b = c;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int x=20, y=30;
    swapping<int>(x,y);
    return 0;
}