#include<bits/stdc++.h>
using namespace std;
void subArray(int *arr, int n) {
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            // cout<<"("<<i<<","<<j<<") "; // Accessing the elements using pointer arithmetic
            for(int k=i; k<=j; k++) {
                cout << arr[k] << " "; // Accessing the elements using pointer arithmetic
            }
            cout << ", ";
        }
        cout << endl;
    }
}
int main(){
  int arr[5] = {1,2,3,4,5};
  int n = 5;
  subArray(arr, n);
  return 0;
}
  
  
 
 

 