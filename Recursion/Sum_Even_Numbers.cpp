#include <iostream>
using namespace std;

int sumEvenNumbers(int i, int n) {
    if (i > n)
        return 0;

    return i + sumEvenNumbers(i + 2, n);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = sumEvenNumbers(2, n);

    cout << "Sum of even numbers = " << result << endl;

    return 0;
}