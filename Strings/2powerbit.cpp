#include <iostream>
#include <vector>
using namespace std;


int clearithbit(int n , int i){
    int bitmask = ~(1<<i);
    return (n & bitmask);
}

bool isPowerOfTwo(int n){
    if(!(n&(n-1))){
        return true;
    }
    else{
        return false;
    }
}

int main() {
 
    cout<< isPowerOfTwo(8)<<endl;
    cout<< isPowerOfTwo(6)<<endl;
}   