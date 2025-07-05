#include <iostream>
using namespace std;

int* getPointer() {
    int x = 10;     // Local variable
    return &x;      // Returning address of local variable (DANGLING!)
}

int main() {
    int* ptr = getPointer(); // ptr is now dangling
    cout << *ptr << endl;    // Undefined behavior!
    return 0;
}
