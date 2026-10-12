// contigous space for array of objects
// same type of objects are stored in contiguous memory locations

// statically allocated array at a compile time

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)  {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        int arr[m];
        
        for(int j = 0; j < m; j++){
            cin >> arr[j];
        }
        int sum = accumulate(arr, arr + m, 0);
        double avg = (double)sum/m;
        int max = *max_element(arr,arr+m);
        int min = *min_element(arr,arr+m);
        
        cout<<sum<<endl;
        cout<<avg<<endl;
        cout<<max<<endl;
        cout<<min<<endl;
        
    }
    
    }
    
}