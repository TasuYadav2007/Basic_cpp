#include <iostream>
using namespace std;

// Function
int findMin(int a, int b) {
    if (a < b) {
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

    int result = findMin(num1, num2);

    cout << "Minimum = " << result << endl;

    return 0;
}