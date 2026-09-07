#include <iostream>
using namespace std;

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    float result = average(num1, num2, num3);

    cout << "Average = " << result << endl;

    return 0;
}