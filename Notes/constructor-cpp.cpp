#include<iostream>
using namespace std;

// what is constructor?
// constructor exists inside a class and some rules of constructor...

/*
1. constructor is a basically the name of it's class
2. constructor didn't have any return types
3. constructor is by default public (can't define private)
4. it's call automatically without called when object created
5. you can't use constructor as inheritance
*/

class constructorDemo {
public:
    void getData() {
        cout << "This is the get data method." << endl;
    }
    constructorDemo() {
        cout << "This is a constructor" << endl;
    }
};

int main() {
    // when we define an object for class, constructor called automatic.
    // by default constructor called first (not depending on function calling indexing)
    constructorDemo obj;
    obj.getData();
    return 0;
}