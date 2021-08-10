#include <iostream>
using namespace std;

// basically class is the blue print.
// declaring car class
class car {
    // private variables or methods
private:
    // private variables and methods(functions)
    char color[10];
    int num_of_sets;
public:
    // public variables and methods(functions)
    int topSpeed;
    void getData(int distance, int fuel) {
        cout << "Your car " << distance << "km ran and total " << fuel << "L fuel used." << endl;
    }

    void carspeed() {
        cout << "Top speed of this car is " << topSpeed << "km/h" << endl;
    }

    // defining mileage counting method (but declare outside of class)
    void mileage(float distance, float fuel);
    // };
// second way to create object (after closing bracket of class declaring)
} audi;
// declaring mileage method outside of class car
void car::mileage(float distance, float fuel) {
    float carMileage = distance / fuel;
    cout << "The car mileage is " << carMileage << endl;
}


int main() {
    // this is the one way to create object for perticular class...
    // creating object for class car...
    car swift;
    // now adding properties for swift car...
    swift.topSpeed = 200;
    swift.carspeed();
    swift.getData(10000, 200);
    swift.mileage(10000, 235);
    // swift.mileage(10000, 235);

    // now i'm using audi object that creates after class declaring but inside bracket...
    audi.topSpeed = 250;
    audi.carspeed();
}