#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubble(int arr[], int n) {
    bool isSwap = false;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return; // If no swaps were made, the array is already sorted
        }
    }
    printArray(arr, n);
}
int main(){
  int arr[5] = {5,4,1,3,2};
  int n = 5;
  bubble(arr, n);
  return 0;
}
  