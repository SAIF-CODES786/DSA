#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertion(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printArray(arr, n);
}



int main(){
  int arr[5] = {5,4,1,3,2};
  int n = 5;
  insertion(arr, n);
  return 0;
}  