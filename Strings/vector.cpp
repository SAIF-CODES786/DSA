#include <iostream>
#include <cstring>
using namespace std;



// void func(){
//     int *ptr = new int;
//     *ptr = 10;
//     cout << "Value: " << *ptr << endl;
//     delete ptr;
// }
// void func2(){
//     int size;
//     cin >> size;
//     int *arr = new int[size];
//     for(int i=0; i<size; i++){
//         arr[i] = i + 1;
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     delete[] arr;
// }
// int main(){
//    func();
//    func2();
//  }   


int main(){
    int rows, cols;
    cin >> rows >> cols;
    int **arr = new int*[rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
    }
    int x = 1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr[i][j] = x++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<rows; i++){
        delete[] arr[i];
    }
    delete[] arr;
}