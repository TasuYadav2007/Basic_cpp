#include <iostream>
using namespace std;

int countEvenDigits(int n) {
    if (n == 0)
        return 0;

    int digit = n % 10;

    if (digit % 2 == 0)
        return 1 + countEvenDigits(n / 10);
    else
        return countEvenDigits(n / 10);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = countEvenDigits(n);

    cout << "Even digits = " << result << endl;

    return 0;
}