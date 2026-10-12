#include <iostream>
#include <cstring>
using namespace std;

// bool anagram(string str1, string str2){
//     if(str1.length() != str2.length()) {
//         return false;
//     }
//     int count[26] = {0};
//     for(int i=0;i<str1.length();i++){
//         int index = str1[i] - 'a';
//         count[index]++;
//     }

//     for(int i=0;i<str2.length();i++){
//         int index = str2[i] - 'a';
//         if(count[index]==0){
//             return false;
//         }
//         count[index]--;
//     }
//     return true;
// }

// int main(){
//     string str1 ="anagram";
//     string str2 = "nagaram";
//     if(anagram(str1, str2)){
//         cout << "The strings are anagrams." << endl;
//     } else {
//         cout << "The strings are not anagrams." << endl;
//     }
//     return 0;
//  } 


 int main(){
    int size;
    cin>> size;
    

    int x =1;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i] = x;
        cout<<arr[i]<<" ";
        x++;
    }
    cout<<endl;
 }