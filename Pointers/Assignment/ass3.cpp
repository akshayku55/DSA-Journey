#include<iostream>
using namespace std;
int main(){
    int a = 32;         // 'a' is initialized to 32
    int *ptr = &a;      // 'ptr' points to the address of 'a'
    char ch = 'A';      // 'ch' is a char initialized to 'A' (ASCII 65)
    char &cho = ch;     // 'cho' is a reference (alias) to 'ch'
    cho += a;           // 'cho' = 'cho' + a; So 'ch' = 'A' + 32
    *ptr += ch;         // 'a' = 'a' + ch (now 'ch' has changed)
    cout << a << ", " << ch << endl;
}
