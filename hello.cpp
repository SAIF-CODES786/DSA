#include <iostream>
using namespace std;

// pass by value means that a copy of the actual parameter is passed to the function. Changes made to the parameter inside the function do not affect the original argument.
void changeA(int param){
    param = 20;
    cout<<"Inside changeA: "<<param<<"\n";
}

// PASS BY REFERENCE
// pass by reference means that a reference (alias) of the actual parameter is passed to the

void changeA(int *ptr){
    *ptr = 20;
    cout<<"Inside changeA: "<<*ptr<<"\n";
}

int main() {
    // int a = 10;
    // int *ptr = &a;
    // int **pptr = &ptr;
    // cout<<*(&a)<<"\n";
    // cout<<&ptr<<"="<<pptr<<"\n";
    // cout<<&a<<"="<<ptr<<"\n";
    
    int a = 10;
    // changeA(a);
     changeA(&a);
    cout<<"Inside main: "<<a<<"\n";

    return 0;
}   



