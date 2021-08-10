#include<iostream>
using namespace std;

// what is destructor?
// destructor is exactly opposite of constructor (constructor calls first but destructor calls last (when program completely finished))...

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
    // when we define an object for class, destructorDemo called automatic after finished full program.
    destructorDemo obj;
    obj.getData();
    return 0;
}