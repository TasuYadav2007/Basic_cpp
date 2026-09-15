#include <iostream>
using namespace std;

int sumOddNumbers(int i, int n) {
    if (i > n)
        return 0;

    return i + sumOddNumbers(i + 2, n);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = sumOddNumbers(1, n);

    cout << "Sum of odd numbers = " << result << endl;

    return 0;
}