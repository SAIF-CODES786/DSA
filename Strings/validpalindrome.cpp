#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char str [],int n){
   int st = 0, end=n-1;
   while(st<=end) {
    if(str[st]!=str[end]){
        cout<<"invalid palindrome";
        return false;
    } else{
        st++;
        end--;
    }
   }
   cout<<"valid palindrome\n";
   return true;
}

int main(){
    char str[] ="racecar";
    palindrome(str,strlen(str));

    return 0;
 } 