#include<iostream>
using namespace std;
int main(){
    int arr[5] = {7,5,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}