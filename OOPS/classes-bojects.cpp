#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class student {
    // properties
private:    
    string name;
    float marks;

    // methods

public:
    void getpercentage(){
        cout<< (marks * 100) << "% \n";
    }

    // setters
    void setname(string n){
        name = n;
    }
    void setmarks(float m){
        marks = m;
    }

    // getters
    string getname(){
        return name;
    }
    float getmarks(){
        return marks;
    }
};

int main() {
   student s1;
   s1.setname("John");
   s1.setmarks(0.85);
   cout << "Name: " << s1.getname() << endl;
   cout << "Marks: " << s1.getmarks() << endl;
   return 0;
}