#include<iostream>
using namespace std;
int main(){
    // Using extra space
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int brr[n];
    int i = 0;
    for(int j = n-1; j>=0; j--){
          brr[i] = arr[j];
          i++;
    }
    for(int i = 0; i<n; i++){
        cout<<brr[i]<<" ";
    }
}