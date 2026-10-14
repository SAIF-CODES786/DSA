#include <iostream>
#include <vector>
using namespace std;


int getithbit(int n , int i){
    int bitmask = 1<<i;
    if(!(n & bitmask)){
      return 0;
   }else{
      return 1;
    }
}
int main() {
    cout<< getithbit(5,1)<<endl;
    cout<< getithbit(5,2)<<endl;
}
