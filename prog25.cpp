#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3};
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for(int i=0; i<v.size; i++)
    {
        cout << v[i] << endl;
    }
    vector<int>::iterator it;
    cout << "\nUsing iterator\n" << endl;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}