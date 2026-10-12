#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int m;
        cin>>m;

        int arr[m];

        for(int j=0;j<m;j++){
            cin>>arr[j];
        }

        int sum = accumulate(arr,arr+m,0);

        cout<<sum<<endl;
    }

    return 0;
}