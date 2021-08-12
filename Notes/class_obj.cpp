#include <iostream>
using namespace std;

/*
Class is a blue-print.
It is a template for objects.
*/

/* in class, variables are called data members
   & functions are called member functions or methods
*/

// declaring car class
class car {
// private specifier
private:
    // private data members or methods
    char color[10];
    int num_of_sets;
// public specifier
public:
    // public data members 
    int topSpeed;

    // public methods inside the class
    void getData(int distance, int fuel) {
        cout << "Your car travelled " << distance << "km ran and " << fuel << "L fuel is consumed." << endl;  
    }

    void carspeed() {
        cout << "Top speed of this car is " << topSpeed << "km/h" << endl;
    }

    // prototype for mileage counting method outside the class
    void mileage(float distance, float fuel);
    // };

} audi;   

/*
There are three ways to create objects for a particular class
1. declaring object before closing the class with ";"
2. declaring objects outside the class or in main function with syntax --> ClassName ObjectName;
3. using new operator 
*/

// declaring mileage method outside the class car
void car::mileage(float distance, float fuel) {
    float carMileage = distance / fuel;
    cout << "The car's mileage is " << carMileage << endl;
}

// main function
int main() {
    
    car swift;     // creating object for class car
    
    swift.topSpeed = 200;    // setting properties of car

    // function call
    swift.carspeed();
    swift.getData(10000, 200);
    swift.mileage(10000, 235);
    // swift.mileage(10000, 235);

    audi.topSpeed = 250;
    audi.carspeed();

    // note that audi is declared within the class
    // while swift is declared in main function

    return 0;
}