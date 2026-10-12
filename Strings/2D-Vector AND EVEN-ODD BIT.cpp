#include <iostream>
#include <vector>
using namespace std;


void oddOreven(int n){
   if(!(n&1==0)){
      cout<<n<<" is even"<<endl;
   }else{
      cout<<n<<" is odd"<<endl;
   }
}
int main() {
    
   // vector<vector<int>> vec={{1,2,3},{4,5,6},{7,8,9}};
   // for(int i=0; i<vec.size(); i++){
   //    for(int j=0; j<vec[i].size(); j++){
   //       cout<<vec[i][j]<<" ";
   //    }
   //    cout<<endl; 
   // }
   oddOreven(5);
   oddOreven(6);
}