#include <iostream>
using namespace std;

// Function
bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num)) {
        cout << "Even number" << endl;
    } else {
        cout << "Odd number" << endl;
    }

    return 0;
}