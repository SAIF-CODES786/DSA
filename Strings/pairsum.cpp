#include <iostream>
#include <vector>
using namespace std;
vector<int>pairsum(vector<int>arr,int target) {
    int st=0,end=arr.size()-1;
    int currentSum=0;
    vector<int> ans;
    while(st<end){
        currentSum=arr[st]+arr[end];
        if(currentSum==target){
            ans.push_back(st);
            ans.push_back(end);
        
        }
        else if(currentSum<target){
            st++;
        }
        else{
            end--;
        }
    }
    return ans;
}
int main() {
    
   vector<int> vec={2,7,11,15};
   int target = 9;
   vector<int> ans = pairsum(vec,target);
   cout<<"Indices: "<<ans[0]<<" "<<ans[1]<<endl;
   
}