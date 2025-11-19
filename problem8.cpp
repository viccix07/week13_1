#include <iostream>

using namespace std;

void reverseArr(int** arr, int size) {
    int* a = *arr; // the actual array
    int i = 0, j = size - 1;

    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int s;
    cin >> s;
    int nums[s];
    int* ptr = nums;
    for (int i = 0; i < s; i++) {
        cin >> nums[i];
    }
    reverseArr(&ptr, s);

    for (int i = 0; i < s; i++) {
        cout << *(ptr+i) << " ";
    }
    return 0;
}