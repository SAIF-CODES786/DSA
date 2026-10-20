#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class user { 
private:
    int id;
    string password;
public:
     string name;

     user(int id) {
        this->id = id;
     }
    

// getter
string getpassword() {
        return password;
    }

// setter

void setpassword(string password) {
    this->password = password;
}
    
};

int main() {
   user user1(101);
   user1.name = "apna college";
   user1.setpassword("1234");
   cout << "User name: " << user1.name << endl;
   cout << "User password: " << user1.getpassword() << endl;
   return 0;
}