#include<iostream>
using namespace std;
int main(){
   char ch = 'a';
   char *ptr = &ch;
   cout<<ptr;
   ptr++;
   cout<<endl<<ptr;
}