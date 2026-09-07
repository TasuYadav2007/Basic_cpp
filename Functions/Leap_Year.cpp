#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 4 == 0 && year % 100 != 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year;

    cout << "Enter year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}