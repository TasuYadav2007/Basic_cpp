#include <iostream>
using namespace std;

int absoluteValue(int num) {
    if (num < 0) {
        num = -num;
    }

    return num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = absoluteValue(num);

    cout << "Absolute value = " << result << endl;

    return 0;
}