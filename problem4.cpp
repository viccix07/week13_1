#include <iostream>

using namespace std;

void fixNeg(int* arr, int size) {
    for (int i=0; i<size; i++) {
        if (*(arr+i)<0) {
            *(arr+i)=0;
        }
    }
}

int main() {
    int size;
    cout << "Enter size of an array:" << endl;
    cin >> size;
    int array[size];
    int *arr=array;
    for (int i=0; i<size; i++) {
        cin >> array[i];
    }
    fixNeg(arr, size);
    for (int i=0; i<size; i++) {
        cout << array[i] << endl;
    }
    return 0;
}