#include<iostream>
using namespace std;

/*

      What is destructor ?
 
  --> It is opposite if constructor
  --> It destroys the objects created by constructor
  --> Synatx ---> ~ConstructorName(){}
  --> Where "~" is called tidle

========================================================================================
    
      When is destructor called ?
    
  --> A destructor function is called automatically when the object goes out of scope.
  --> When the function ends.
  --> When the program ends.
  --> When a block containing local variables ends. 
  --> When a delete operator is called.
  
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
