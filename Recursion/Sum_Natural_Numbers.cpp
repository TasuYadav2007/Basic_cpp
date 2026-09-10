#include <iostream>
using namespace std;

int sumNaturalNumbers(int n) {
    if (n == 0)
        return 0;

    return n + sumNaturalNumbers(n - 1);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = sumNaturalNumbers(n);

    cout << "Sum = " << result << endl;

    return 0;
}