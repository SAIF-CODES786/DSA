// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter length of array = ";
//     cin >> n;

//     int arr[n];  // array declaration

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
   

    int arr[] = {5,4,3,9,12};// array declaration
    int max =arr[0];
    for (int i = 0; i < 5; i++) {
        if(max<arr[i]){
            max=arr[i];
        }
    }
   cout<<"maximum number is = "<<max;
    

    return 0;
}