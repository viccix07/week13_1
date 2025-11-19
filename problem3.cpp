#include <iostream>

using namespace std;

int countValid(int* arr[], int size) {
    int count=0;
    for (int i=0; i<size; i++) {
        if (*(arr+i)!= nullptr) {
            count++;
        }
    }
    return count;
}

int main() {
    int a,n,b;
    a=10, n=7, b=98;
    int *array[4]={&a,&b, nullptr,&n};
    cout << countValid(array, 5);
    return 0;
}