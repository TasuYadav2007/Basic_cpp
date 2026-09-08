#include <iostream>
using namespace std;

int sumNaturalNumbers(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = sumNaturalNumbers(n);

    cout << "Sum = " << result << endl;

    return 0;
}