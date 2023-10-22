#include <iostream>
using namespace std;

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

void printPascalsTriangle(int numRows) {
    for (int line = 0; line < numRows; line++) {
        for (int j = 0; j <= line; j++) {
            cout << binomialCoefficient(line, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    printPascalsTriangle(numRows);

    return 0;
}
