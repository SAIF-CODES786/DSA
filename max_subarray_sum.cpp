// #include<bits/stdc++.h>
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


// #include<bits/stdc++.h>
// using namespace std;
// void maxSubArray2(int *arr, int n) { 
//     int maxSum = INT_MIN;  // Initialize maxSum to the smallest integer value - it is micros
//     for(int i=0; i<n; i++) { // Start of the outer loop to iterate through the array
//         int currentSum = 0;
//         for(int j=i; j<n; j++) { // Start of the inner loop to calculate the sum of subarrays
//             currentSum += arr[j]; // Add the current element to the current sum
//             maxSum = max(maxSum, currentSum);
//         }
//     }
//     cout << "Maximum Subarray Sum: " << maxSum << endl;
// }
// int main(){
//   int arr[6] = {2,-3,6,-5,4,2};
//   int n = 6;
//   maxSubArray2(arr, n);
//   return 0;
// }


// kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
void maxSubArray3(int *arr, int n) { 
    int maxSum = INT_MIN;
    int currentSum = 0;  // Initialize maxSum to the smallest integer value - it is micros
    for(int i=0; i<n; i++) { // Start of the outer loop to iterate through the array
        currentSum += arr[i]; // Add the current element to the current sum
        maxSum = max(maxSum, currentSum); // Update maxSum if currentSum is greater
        if(currentSum < 0) { // If currentSum becomes negative, reset it to 0
            currentSum = 0;
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
}
int main(){
  int arr[6] = {2,-3,6,-5,4,2};
  int n = 6;
  maxSubArray3(arr, n);
  return 0;
}

