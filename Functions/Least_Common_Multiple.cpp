#include <iostream>
using namespace std;

int findLCM(int a, int b) {
    int lcm;

    for (int i = 1; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    return lcm;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int result = findLCM(num1, num2);

    cout << "LCM = " << result << endl;

    return 0;
}