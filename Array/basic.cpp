#include<iostream>
using namespace std;
int main(){
    //int marks[50]; // decleraing array
    // cout<<marks[0];
    // cout<<marks[1];
    // cout<<marks[50]; random value with one warning
    // int marks[50] = {1,2,3};
   // cout<<marks[4]; // now all other indexes values ini with 0
    int marks[] = {1,2,3}; // size automatically known
    cout<<sizeof(marks)<<endl; // ouput 12->num of bytes (3 ele of type int)
    // 1 int = 4 bytes , 4*3=12
    return 0;
}