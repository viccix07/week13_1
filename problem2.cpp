#include <iostream>

using namespace std;

void swapRef(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
}

void swapPtr(int* a, int* b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a;
    cin >> a;
    int *c=&a;
    int b;
    cin >> b;
    int *d=&b;
    swapRef(a,b);
    cout << "Swap by Reference: " << a << ' ' << b << endl;
    swapPtr(c,d);
    cout << "Swap by Pointer: " << a << ' ' << b << endl;
}