#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,3,9,2};
    int max = arr[0];
    for(int i = 0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
}