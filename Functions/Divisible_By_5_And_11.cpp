#include <iostream>
using namespace std;

bool isDivisible(int num) {
    if (num % 5 == 0 && num % 11 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isDivisible(num)) {
        cout << "Number is divisible by 5 and 11" << endl;
    } else {
        cout << "Number is not divisible by 5 and 11" << endl;
    }

    return 0;
}