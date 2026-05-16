#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;
void printNumbers(string threadName){
    for(int i=1;i<=5;i++){
        mtx.lock();
        cout<<threadName<<" : "<<i<<endl;
        mtx.unlock();
    }
}
{
    thread t1(printNumbers,"Thread 1");
    thread t2(printNumbers,"Thread 2");
    t1.join();
    t2.join();
    return 0;
}

