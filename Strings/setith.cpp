#include <iostream>
#include <vector>
using namespace std;


int getithbit(int n , int i){
    int bitmask = 1<<i;
    return (n | bitmask);
}
int main() {
    cout<< getithbit(6,1)<<endl;
    cout<< getithbit(6,2)<<endl;
}
