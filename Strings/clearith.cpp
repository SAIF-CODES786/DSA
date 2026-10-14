#include <iostream>
#include <vector>
using namespace std;


int clearithbit(int n , int i){
    int bitmask = ~(1<<i);
    return (n & bitmask);
}
int main() {
    cout<< clearithbit(6,1)<<endl;
    cout<< clearithbit(6,2)<<endl;
}   










