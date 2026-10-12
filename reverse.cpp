

#include <iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
 

// with extra space

int main() {
   
  int arr[] = {2,4,6,8,10,12,14,16};
  int n = sizeof(arr)/sizeof(int);

  int copyArr[n];
  for(int i = 0; i < n; i++){
    int j = n-1-i;
    copyArr[i] = arr[j];
    cout << copyArr[i] << " ";
  }
  for(int i=0;i<n;i++) 
    arr[i]=copyArr[i];
  printArr(arr,n);
  return 0;
}



// without extra sapce

#include <iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }  
    cout<<endl;
}
 

int main() {
   
  int arr[] = {2,4,6,8,10,12,14,16};
  int n = sizeof(arr)/sizeof(int);

  int start = 0, end = n-1;
  while(start<end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  
  printArr(arr, n);
  return 0;
}         