#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl; //0x...

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << *arr << endl; //arr[0]
    cout << *(arr+1) << endl; //arr[1]
    cout << *(arr+2) << endl; //arr[2]

    return 0;
}

#include <iostream>
using namespace std;

void func(int arr[]) {
    arr[0] = 1000;
}

int main() {
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl; //0x...

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    func(arr); // passing array name is eq. to passing the pointer


    return 0;
}


#include <iostream>
using namespace std;

void printArr(int nums[]) {
   cout<<sizeof(nums)<<endl; // 8 = size of int pointer
}

int main() {
  

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

   printArr(arr);
    return 0;
}

void printArr(int nums[],int n) {
   cout<<sizeof(nums)<<endl; // 8 = size of int pointer
}

int main() {
  

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

   printArr(arr,n);
    return 0;
}