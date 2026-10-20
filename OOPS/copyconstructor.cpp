#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class car { 
   public:
    string name;
    string color;
    int *mileage;

    car(string name, string color) {        
        cout << "constructor is created";    
        this->name = name;    
        this->color = color;      
        mileage = new int; // dynamically allocate memory for mileage   
        *mileage = 12; // assign a value to mileage       
    }

    // custom copy constructor
    car(const car &c) {
        cout << "Copy constructor is called" << endl;
        name = c.name;
        color = c.color;   
        mileage = new int; // allocate new memory for mileage
        *mileage = *(c.mileage); // deep copy of mileage value
        mileage = c.mileage; // shallow copy of mileage pointer
    }

    // cuustom destructor
    ~car() {
        cout << "Destructor is called for car: " << name << endl;
        if (mileage != nullptr) {
            delete mileage; // free the dynamically allocated memory
            mileage = nullptr; // set pointer to nullptr after deletion
        }
    }
};

int main() {
   car c1("Toyota", "Red");
   car c2(c1); // This will call the copy constructor
   //cout << "Car 1 name: " << c1.name << ", color: " << c1.color << endl;
   //cout << "Car 2 name: " << c2.name << ", color: " << c2.color << endl; 
    cout << "Car 1 mileage: " << *c1.mileage << endl;     
    cout << "Car 2 mileage: " << *c2.mileage << endl;         
    *c2.mileage = 10; // change mileage of c2     
    cout << "Car 1 mileage: " << *c1.mileage << endl;    
    cout << "Car 2 mileage: " << *c2.mileage << endl;    
   return 0;
}  




















