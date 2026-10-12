#include<bits/stdc++.h>
// using namespace std;
// void maxSubArray(int *arr, int n) {
//     int maxSum = INT_MIN;  // Initialize maxSum to the smallest integer value - it is micros
//     for(int i=0; i<n; i++) {
//         for(int j=i; j<n; j++) {
//             int currentSum = 0;
//             for(int k=i; k<=j; k++) {
//                 currentSum += arr[k];
//             }   
//             cout << currentSum << " ";
//             maxSum = max(maxSum, currentSum);
//         }
//         cout << endl;
//     }
//     cout << "Maximum Subarray Sum: " << maxSum << endl;
// }
// int main(){
//   int arr[6] = {2,-3,6,-5,4,2};
//   int n = 6;
//   maxSubArray(arr, n);
//   return 0;
// }