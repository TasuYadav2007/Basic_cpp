#include <iostream>
using namespace std;

// Function
int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int result = findMax(num1, num2);

    cout << "Maximum = " << result << endl;

    return 0;
}