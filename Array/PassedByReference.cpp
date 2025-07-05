#include<iostream>
using namespace std;

void printarr(int nums[]){
    cout << sizeof(nums); // Prints 8 (or 4)
    // so always pass size of array
}

void func (int arr[]){
    arr[0] = 1000;
}

void func1(int* ptr){
    ptr[0] = 1211;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << arr << endl;        // Prints address of arr
    cout << *arr + 10 << endl;  // Prints 11
    func(arr);                  // arr[0] = 1000
    func1(arr);                 // arr[0] = 1211
    printarr(arr);              // Prints 8 or 4 (not 20)
    cout << arr[0];             // Prints 1211
}
