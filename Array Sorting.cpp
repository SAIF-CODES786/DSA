#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr1(n),arr2(n),merged;
    for(int i = 0;i<n;i++) {
        cin>>arr1[i];
    } 
    for(int i = 0;i<n;i++) {
        cin>>arr2[i];
    }
      
      
    for(int i=0;i<n;i++) {
        merged.push_back(arr1[i]);
    }
    
    for(int i=0;i<n;i++){
        merged.push_back(arr2[i]);
    }
    
    
    sort(merged.begin(),merged.end());
    
    cout<<merged[n-1]+merged[n]<<endl;
    
    return 0;
     
     
    
	
}
