#include<iostream>
#include<thread>
using namespace std;

void run()
{
    cout<<"Thread "<<id<<" is running in thread "<<endl;
}

int main()
{
    thread t1(task,200);
    t1.join();
    cout<<"Our execution completed"<<endl;
    return 0;
}