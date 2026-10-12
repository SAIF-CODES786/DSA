#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int minIndex=0;
    int maxIndex=0;
    for(int i=1;i<n;i++){
        if(v[i]<v[minIndex]){
            minIndex=i;
        }
        if(v[i]>v[maxIndex]){
            maxIndex=i;
        }
    } 



     
    

    return 0;
}