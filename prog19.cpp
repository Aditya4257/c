#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

void increment (int x)
{
    x += 10;
    cout<<"Inside thread: "<<x<<endl;
}
int main()
{
    int num = 5;
    thread t(increment, num);
    t.join();
    cout<<"Main value: "<<num<<endl;
    return 0;
}