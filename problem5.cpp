#include <iostream>

using namespace std;

int sum2D(int **m, int r, int c) {
    int sum=0;
    int **rowPtr=m;
    int **rowEnd=m+r;
    while (rowPtr!=rowEnd) {
        int *colPtr=*rowPtr;
        int *colEnd=*rowPtr+c;
        while (colPtr!=colEnd) {
            sum+=*colPtr;
            colPtr++;
        }
        rowPtr++;
    }
    return sum;
}

int main() {
    const int rows=3, col=2;
    int row[col], row0[col], row1[col];
    int *m[rows]={row, row0, row1};
    for (int i=0; i<rows; i++) {
        for (int j=0; j<col; j++) {
            cin >> m[i][j];
        }
    }
    cout << sum2D(m, rows, col) << endl;

}