#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int key = 10;
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = size-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(arr[mid]>key){
            j = mid-1;
        }
        else if(arr[mid]<key){
            i = mid+1;
        }
    }
}