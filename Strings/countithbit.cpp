#include <iostream>
#include <vector>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num>0) {
        int lasDig = num & 1; // Get the last digit
        count += lasDig; // Add the last digit to count
        num = num >> 1; // Right shift the number by 1
    }
    return count;
}

int main() {
   cout << countSetBits(15) << endl; // Output: 4
}