#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int> m;

    m["Aditya"] = 100;
    m["Anand"] = 200;
    m["FSP"] = 300;

    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << m["Aditya"] << endl;
    cout << m["Anand"] << endl;
    cout << m["FSP"] << endl;

    return 0;
}




try{
    if (b===0) {
        throw "Division by zero error!";
    }
    else {
        cout << "Result: " << a / b << endl;
        
    }

}

catch(int x){
    cout<<"Invalid age:"<<x;
}

catch (char c){
    cout<<"Caught exception: "<<c<<endl;
}

catch (const char* msg) {
    cout << "Caught exception: " << msg << endl;
}

{
    try {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        if (age < 0) {
            throw age; // Throwing an integer exception
        }
        else {
            cout << "Your age is: " << age << endl;
        }
    }
    catch (int x) {
        cout << "Invalid age: " << x << endl;
    }
}








