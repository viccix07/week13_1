#include <iostream>

using namespace std;

int* findMax(int* arr, int size) {
    int* start=arr+1;
    int *end=arr+size;
    int *max=arr;
    while (start < end) {
        if (*max < *start) {
            max=start;
        }
    start++;
    }
    return max;
}

int main() {
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++){
        cin >> arr[i];
    }
    int *mp = findMax(arr, s);
    cout << *mp << endl;
    return 0;
}