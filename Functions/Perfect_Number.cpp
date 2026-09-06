#include <iostream>
using namespace std;

// Function
bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    return sum == n;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num)) {
        cout << "Perfect number" << endl;
    } else {
        cout << "Not a perfect number" << endl;
    }

    return 0;
}