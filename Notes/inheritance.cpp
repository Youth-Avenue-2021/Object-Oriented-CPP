#include <iostream>
using namespace std;

// inheritance

// There are total 5 types of inheritance...
/*
1. single inheritance
2. multiple inheritance
3. multilevel inheritance
4. Hierarchical inheritance
5. Hybrid inheritance
*/

/*
// single inheritance

class vehicle {
public:
    vehicle() {
        cout << "This is vehicle constructor." << endl;
    }
};
class car :public vehicle {
public:
    car() {
        cout << "This is car constructor." << endl;
    }
};

int main() {
    cout << endl;
    car swift;
    cout << endl;
    return 0;
}
*/



// Multilevel inheritance
// here is the basic example of multilevel inheritance...
// here, vehicle class is a parent (base) class and car is the parent class of vehicle and audi is the parent class of car
// so, audi class uses all methods of vehicle because audi class uses car class methods and car class uses vehicle class methods...

/*
class vehicle {
public:
    string otherVehicle = "bike";
    vehicle() {
        cout << "This is vehicle constructor." << endl;
    }
};
class car :public vehicle {
public:
    car() {
        cout << "This is car constructor." << endl;
    }
};
class audi :public car {
public:
    audi() {
        cout << "This is audi constructor." << endl;
    }
};

int main() {
    cout << endl;
    audi obj;
    cout << endl;
    cout << "we can access vehicle variables using object of audi car : " << obj.otherVehicle << endl;
    return 0;
}
*/



// Multiple inheritance
/*
class A {
public:
    string otherVehicle = "bike";
    A() {
        cout << "This is constructor A." << endl;
    }
};
class B {
public:
    B() {
        cout << "This is constructor B." << endl;
    }
};
// here class C uses class A & B as parent class (base class)
class C :public A, public B {
public:
    C() {
        cout << "This is constructor C." << endl;
    }
};

int main() {
    cout << endl;
    C obj;
    cout << endl;
    // cout << obj.otherVehicle << endl;
    return 0;
}
*/



// Hierarchical inheritance

class vehicle {
public:
    string otherVehicle = "train";
    vehicle() {
        cout << "This is constructor of vehicle." << endl;
    }
};

// here class car & bike uses class vehicle as parent class (base class)
class car :public vehicle {
public:
    car() {
        cout << "This is constructor of car." << endl;
    }
};
class bike :public vehicle {
public:
    bike() {
        cout << "This is constructor of bike." << endl;
    }
};

int main() {
    cout << endl;
    bike obj;
    cout << endl;
    // cout << obj.otherVehicle << endl;
    return 0;
}



// hybrid inheritance

// plz set an example for hybrid inheritance