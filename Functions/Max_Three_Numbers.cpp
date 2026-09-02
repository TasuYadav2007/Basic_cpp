#include <iostream>
using namespace std;

// Function
int findMax(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    int result = findMax(num1, num2, num3);

    cout << "Maximum = " << result << endl;

    return 0;
}