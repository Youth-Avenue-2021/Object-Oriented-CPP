#include<iostream>
using namespace std;

/*
What is destructor?
    - It is opposite if constructor
    - It destroys the objects created by constructor
    - It is called automatically at the end of the program
    - synatx ---> ~ConstructorName(){}
    - where "~" is called tidle
*/

class destructorDemo {
public:
    ~destructorDemo() {
        cout << "This is a destructor" << endl;
    }
    void getData() {
        cout << "This is the get data method." << endl;
    }
};

int main() {
    
    destructorDemo obj;
    obj.getData();
    return 0;
}