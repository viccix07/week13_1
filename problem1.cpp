#include <iostream>

using namespace std;

void setToHundred(int **number) {
    **number=100;
}

int main() {
    int a;
    cin >> a;
    int *b=&a;
    int **c=&b;
    setToHundred(c);
    cout << a << endl;
}