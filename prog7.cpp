#include <iostream>
using namespace std;

int addition(int value1, int value2)
{
    int result = value1 + value2;
    return result;
}
int addition(int value1, int value2, int value3)
{
    int result = value1 + value2 + value3;
    return result;
}
int main()
{
    int myFunc=addition(10,20,30);
    cout<<myFunc;
    return 0;
}