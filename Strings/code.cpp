#include <iostream>
#include <cstring>
using namespace std;

// int main(){
//     char ch = 'f';
//     int pos = ch-'a';
//     cout << pos << endl;
//     char arr[5] = {'c','o','d','e','\0'};
//     cout<<arr<<endl; // print char arr
//     // "apna college"
//     // "helloworld" ---- string literals

//     return 0; 
// } 




void toUpper(char word[],int n) {
    for(int i=0;i<n;i++) {
        char ch = word[i];
        if(ch>='A' && ch<='Z') { // uppercase
          continue;
        } else { // lowercase
          word[i] =  ch - 'a' + 'A';
        }
    }
}
int main(){
    // char sentence[30];
    // cin.getline(sentence,30,'*'); // third argument is delimiter
    
    // cout<<"your word was: "<< sentence << " " << strlen(sentence)<<endl;

    char word[] = "ApPle";
    toUpper(word,strlen(word)); 
    cout<<word<<endl;
    return 0; 
 } 


 








