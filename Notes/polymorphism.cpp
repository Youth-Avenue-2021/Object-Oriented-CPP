#include <iostream>
using namespace std;

/*
=> Types of polymorphism

*/

// first type - compile time polymorphism
/*
class abc {
public:
    int add(int a, int b) {
        return a + b;
    }
};

class xyz :public abc {
public:
    int add(int a, int b, int c) {
        return a + b + c;
    }
};


int main() {
    cout << endl;

    abc obj1;
    xyz obj2;

    cout << "Output : " << obj1.add(10, 20) << endl;
    cout << "Output : " << obj2.add(10, 20, 30) << endl;

    cout << endl;
    return 0;
}
*/



// second type - runtime polymorphism

class A {
public:
    void display() {
        cout << "This is super/parent class" << endl;
    }
};
class B :public A {
public:
    void display() {
        cout << "This is Base/child class" << endl;
    }
};

int main() {
    cout << endl;

    A obj1;
    obj1.display();

    B obj2;
    obj2.display();


    cout << endl;
    return 0;
}