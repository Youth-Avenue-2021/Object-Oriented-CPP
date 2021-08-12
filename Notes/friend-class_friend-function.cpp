#include <iostream>
using namespace std;

// what is friend class ?
/*
class xyz {
private:
    string organization = "youth-avenue";
    int value = 25;
public:
    // declaring abc can access your private data members and methods...
    friend class abc;
};

class abc {
public:
    void getData(xyz obj) {
        // now we can access private data members and methods from xyz class...
        cout << "value of (string) organization from xyz class : " << obj.organization << endl;
        cout << "value of value variable from xyz class : " << obj.value << endl;
    }
};

int main() {
    cout<<endl;
    xyz obj;
    abc obj2;
    obj2.getData(obj);
    cout<<endl;
    return 0;
}
*/


// what is friend class ?

class xyz {
private:
    string organization = "youth-avenue";
    int value = 25;
public:
    // declaring abc can access your private data members and methods...
    friend void myFunction();
};

// creating global function...
void myFunction() {
    xyz obj;
    cout << "value of (string) organization from xyz class : " << obj.organization << endl;
    cout << "value of value variable from xyz class : " << obj.value << endl;
}

int main() {
    cout<<endl;
    myFunction();
    cout<<endl;
    return 0;
}