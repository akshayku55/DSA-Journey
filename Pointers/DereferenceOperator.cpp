#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<*ptr; // Gives value of a
    *ptr = 20;
     cout<<endl<<*ptr;
}