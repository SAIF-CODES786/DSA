#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class car { 
    string name;
    string color;

// public:
//     car(string nameValue, string colorValue) {
//         cout << "constructor is created";
//         name = nameValue;
//         color = colorValue;

//     }



public:
    car() {
        cout << "constructor is created without parmas\n";
        this->name = name;
        this->color = color;

    }



public:
    car(string nameValue, string colorValue) {
        cout << "constructor is created";
        this->name = name;
        this->color = color;

    }

void start(){
        cout<< "Car is starting.\n";
    }

void stop(){
        cout<< "Car is stopping.\n";
    }

    // getter
    string getName() {
        return name;
    }
    
};

int main() {
   car c0; // This will call the default constructor
   car c1("Toyota", "Red"); // This will call the parameterized constructor
   cout << "Car name: " << c1.getName() << endl;
   c1.start();
   c1.stop();
   return 0;
}