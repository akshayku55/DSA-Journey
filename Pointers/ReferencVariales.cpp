#include<iostream>
using namespace std;
void change(int& b){
    b = 400;
}
int main(){
    int a = 5;
    int &b  = a;
    b = 10;
    change(a);
    cout<<a;
}