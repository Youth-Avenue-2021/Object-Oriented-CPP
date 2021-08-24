// Inheritance

#include <iostream>
using namespace std;

/*
What is Inheritance?
    - Inheritance is wrapping up pf data & functions into a single unit.
    - In simple words, enclosing the required data or functions into a single box
*/

/*
     ___________________________________________________________________________________________
    |  Access  Modifier     | Public derivation  | Private Derivation |  Protected Derivation   |
    |_______________________|____________________|____________________|_________________________|
    |                                                                                           |
    | 1. Private members       Not Inherited        Not Inherited        Not Inherited          |
    | 2. Protected members      Protected              Private             Protected            |  
    | 3. Public members          Public                Private             Protected            |
    |___________________________________________________________________________________________|
    
    *Remember : Private Member are never inheritance
   
*/


/*
Types of Inheritance:
    1. single inheritance
    2. multiple inheritance
    3. multi-level inheritance
    4. Hierarchical inheritance
    5. Hybrid inheritance or multipath inheritance
*/

/*
// SINGLE INHERITANCE - one base class, one derived class

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



/*
//  MULTI-LEVEL INHERITANCE - base class --> first derived class(acts as a base class for next class) --> second derived class

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




/*
// MULTIPLE INHERITANCE - more than one base class, one derived class

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



/*
// HIERARCHIAL INHERITANCE

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
*/

/*
// HYBRID INHERITANCE
    - It combines two or more forms of inheritance
    - Example: When a sub class inherits from multiple base classes & 
      all of its base classes inherit from a single base class
*/

//  HYBRID INHERITANCE
class Student
{
    protected:
        int roll_number;
    public:
        void get_number(int a)
        {
            roll_number = a;
        }
        void put_number(void)
        {
            cout << "Roll number = " << roll_number << endl;
        }
};

class Test : public Student{
    protected:
        float part1, part2;
    public:
        void get_marks(float x, float y)
        {
            part1 = x;
            part2 = y;
        }
        void put_marks(void)
        {
            cout << "displaying marks" << endl
                << "Part 1 = " << part1 << endl
                << "Part 2 = " << part2 << endl;
        }
};

class Sports
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score = s;
        }
        void put_score(void)
        {
            cout << "Sports = " << score << endl;
        }
};

class Result : public Test, public Sports
{
    float total;
    public:
        void display(void);
};

void Result :: display(void)
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    cout << "Total score = " << total << endl;
}

int main()
{
    Result student;

    student.get_number(176);
    student.get_marks(30.5,40.5);
    student.get_score(6.0);
    student.display();

    return 0;
}




