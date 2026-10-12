#include<bits/stdc++.h>
using namespace std;
void maxProfit(int *prices, int n) {
    int bestBuy[100000];  // Initialize bestBuy to the largest integer value
    bestBuy[0] = INT_MAX;  // Set the first element of bestBuy to the first price


    for(int i=1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);  // Update bestBuy with the minimum price so far

        }   
    int maxProfit = 0;  // Initialize maxProfit to 0
    for(int i=1; i<n; i++) {
        int profit = prices[i] - bestBuy[i];  // Calculate the profit for the current day
        maxProfit = max(maxProfit, profit);  // Update maxProfit if the current profit is greater
        
    }
    cout << "Maximum Profit: " << maxProfit << endl;
}
 
int main(){
  int prices[6] = {7,1,5,3,6,4};
  int n = 6;
  maxProfit(prices, n);
  return 0;
}