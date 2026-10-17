#include <iostream>
#include <vector>
using namespace std;


void clearIthBit(int num, int i){
    num = num & ((~0)<<i); // Clear the ith bit last bit
    cout<<num<<endl;
}

int main() {
   clearIthBit(15, 2); // Output: 11
}