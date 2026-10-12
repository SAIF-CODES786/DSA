#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void counting(int arr[], int n) {
    int freq[100000]; // range of elements is 0 to 99999
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
   for(int i=0; i<n; i++) {
            freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
   }
   // 1st step -o(n)

   // 2nd step -o(range)
   for(int i=minVal, j=0; i<=maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
   }
   printArray(arr, n);
}
int main(){
  int arr[8] = {1,4,1,3,2,4,3,7};
  int n = 8;
  counting(arr, n);
  return 0;
}  