#include<iostream>
using namespace std;
int main(){
    int*ptr = NULL;
    cout<<ptr<<"\n";
    cout<<*ptr<<endl; // Segmentation fault
    cout<<5;
}