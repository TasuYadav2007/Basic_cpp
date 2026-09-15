#include <iostream>
using namespace std;

int sumOfSquares(int i, int n) {
    if (i > n)
        return 0;

    return i * i + sumOfSquares(i + 1, n);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = sumOfSquares(1, n);

    cout << "Sum of squares = " << result << endl;

    return 0;
}