#include <iostream>
#include <vector>
using namespace std;


void updateIthBit(int num, int i, int val){
    num = num & ~(1<<i); // Clear the ith bit 
    num = num | (val<<i); // Set the ith bit to val
    cout<<num<<endl;
}

int main() {
   updateIthBit(5, 1, 1); // Output: 7
}   