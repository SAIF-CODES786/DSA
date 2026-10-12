#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i=i+2*k){

        for(int j=0;j<k;j++){
            swap(v[i+j],v[i+k+j]);
        }

    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}