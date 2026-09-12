#include <iostream>
using namespace std;

int reverseNumber(int n, int reverse) {
    if (n == 0)
        return reverse;

    int digit = n % 10;

    reverse = reverse * 10 + digit;

    return reverseNumber(n / 10, reverse);
}

bool isPalindrome(int n) {
    int original = n;

    int reverse = reverseNumber(n, 0);

    return original == reverse;
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << "Palindrome number" << endl;
    } else {
        cout << "Not a palindrome number" << endl;
    }

    return 0;
}