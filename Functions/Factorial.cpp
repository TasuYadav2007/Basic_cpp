#include <iostream>
using namespace std;

// Function
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);

    cout << "Factorial = " << result << endl;

    return 0;
}