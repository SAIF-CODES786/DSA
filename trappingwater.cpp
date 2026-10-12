#include<bits/stdc++.h>
using namespace std;
void trappingWater(int *heights, int n) { 
    int leftMax[20000] , rightMax[20000];  // Initialize leftMax and rightMax arrays
    leftMax[0] = INT_MIN;  // Set the first element of leftMax to the first height
    rightMax[n-1] = INT_MIN;  // Set the last element of rightMax to the last height

    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i-1]);  // Update leftMax with the maximum value so far
        cout << leftMax[i] << " ";  // Print the leftMax array for debugging
    }
      for(int i=n-2; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i+1]);  // Update rightMax with the maximum value so far
        cout << rightMax[i] << " ";  // Print the rightMax array for debugging
    }
    int totalWater = 0;  // Initialize totalWater to 0
    for(int i=0; i<n; i++) {
        int waterLevel = min(leftMax[i], rightMax[i]);  // Calculate the water level at the current index
        if(waterLevel > heights[i]) {  // If the water level is greater than the height, add to totalWater
            totalWater += (waterLevel - heights[i]);
        }
    }
    cout << endl;
    cout << "Total water trapped: " << totalWater << endl;
}

int main(){
  int heights[7] = {4,2,0,6,3,2,5};
  int n = 7;
  trappingWater(heights, n);
  return 0;
}
