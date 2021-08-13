#include<iostream>
using namespace std;


/*
What is constructor?
    - Constructor exists inside a class.
    - It is a special member function.
    - It is used to initialize the objects.
    - It has same name as that of a class,
    - reason behind:
      since it is used to initialize the objects
      thus, the compiler should know before hand
      which method to call when an object is created.
    - syntax --> ClassName(){}
    - Note, here no semicolon is used
*/

/*
Properties of constructor:
    1. It has the same name as that of class
    2. It don't have any return type
    3. It is declared in public (by default) (can't define private)
    4. It is called automatically even if it is not called
    5. Constructor cannot be used in inheritance
*/

/*
Types of constructor:
    1. Default constructor
        - it do not have any argument
        - called automatically if no constructor is defined but object is created

    2. Parameterized constructor
        - it has n number of arguments
        - it needs to be defined

    3. Copy constructor
        - it initializes an object using another object of the same class
*/

/*
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
    // when we define an object for class, constructor is called automatically.

    constructorDemo obj;

    obj.getData();

    return 0;
}
*/


class Person {
private:
    int age;
    float height;
    string name;
public:
    // DEFAULT CONSTRUCTOR
    Person() {
        age = 18;
        height = 162;
        name = "ABC";
    }

    // PARAMETRIZED CONSTRUCTOR
    Person(int age_new, int height_new, string name_new) {

        age = age_new;
        height = height_new;
        name = name_new;
    }

    // COPY CONSTRUCTOR
    Person(Person& myObj) {
        
        cout << "Copy constructor" << endl;
        age = myObj.age;
        height = myObj.height;
        name = myObj.name;
    }

    void display(void) {
        cout << "Age = " << age << endl
            << "Height = " << height << endl
            << "Name = " << name << endl;
    }
};

int main() {
    cout << endl;
    // Person first,obj(25, 34.56, "xyz");
    Person first, obj(25, 180, "XYZ");
    first.display();
    obj.display();
    Person myObj;
    myObj.display();
    cout << endl;

    Person copy = myObj;
    copy.display();
    return 0;
}