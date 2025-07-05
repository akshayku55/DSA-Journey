#include<iostream>
using namespace std;
//Pass by value
void changeA(int a){
    a = 20;
    cout<<a;
}
//Pass By Refernce using Pointerss
void changea(int*ptr){
    *ptr = 30;
}
int main(){
    int a = 10;
    changeA(a);
    changea(&a);
    cout<<endl<<a;


}