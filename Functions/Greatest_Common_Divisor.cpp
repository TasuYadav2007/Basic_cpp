#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    int gcd = 1;

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int result = findGCD(num1, num2);

    cout << "Greatest Common Divisor = " << result << endl;

    return 0;
}