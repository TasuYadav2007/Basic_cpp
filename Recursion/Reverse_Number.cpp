#include <iostream>
using namespace std;

int reverseNumber(int n, int reverse) {
    if (n == 0)
        return reverse;

    int digit = n % 10;

    reverse = reverse * 10 + digit;

    return reverseNumber(n / 10, reverse);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = reverseNumber(n, 0);

    cout << "Reverse = " << result << endl;

    return 0;
}