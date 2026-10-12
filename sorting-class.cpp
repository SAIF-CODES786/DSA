// functions 
// sort(arr_name,arr_name+length,less<int>());
// sort(arr_name,arr_name+length,greater<int>());

#include <bits/stdc++.h>
using namespace std;                

int main() {
    int n;         
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

                                                                                                                                
    int sum = accumulate(arr+n-5, arr + n, 0);

    sort(arr,arr+8,greater<int>());
    
    cout<<sum<<endl;
    for(int i = n-5;i<n;i++) {
        
          cout<<arr[i] <<endl;
     }
         
}             


// int first = a[i];
// nums[i]=val;
//int freq= count(arr,arr+len,element);
// int index = find(arr,arr+len,element)- arr;
// bool ans = equal(arr1,arr1+len,arr2)
// reverse(nums,nums+len);