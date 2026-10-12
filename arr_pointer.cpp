#include <iostream>
using namespace std;



int main() {
    int arr[5];
    cout<<arr<<"\n";
    int y=25;
    arr=&y;
// int x = 10;
// int *p = &x;

// int y =25;
// p = &y;
// cout << *p << endl;
  

  return 0;
}
 // pointer 1

#include <iostream>
using namespace std;



int main() {
 int a = 10;
 int *aptr = &a;
 cout<<aptr<<"\n";
 aptr++;
 cout<<aptr<<"\n";
  return 0;
}


// pointer 2

#include <iostream>
using namespace std;


void printArray(int *ptr, int n) {
    for(int i=0; i<n; i++) {
        cout << *(ptr+i) << " ";
        ptr++; // Move the pointer to the next element
    }
    cout << endl;
}


int main() {
 int arr[] = {10,20,30,40,50};
 int size = sizeof(arr)/sizeof(arr[0]);
 printArray(arr, size);
  return 0;
}  


#include <iostream>
using namespace std;



int main() {
 int a = 10;
 int *aptr = &a;
 int *ptr1=&a;
 int *ptr2=ptr1+3;
 cout<<ptr1<<"\n";
 cout<<ptr2<<"\n";
 cout<<ptr2-ptr1<<"\n";
  return 0;
}

// pointer 4

#include <iostream>
using namespace std;



int main() {
 int a = 10;
 int *aptr = &a;
 int *ptr1=&a;
 int *ptr2=ptr1+3;
//  cout<<ptr1<<"\n";
//  cout<<ptr2<<"\n";
 cout<<(ptr2>ptr1)<<"\n";
  return 0;
}