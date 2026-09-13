#include <iostream>
using namespace std;

void printEvenNumbers(int i, int n) {
    if (i > n)
        return;

    cout << i << endl;

    printEvenNumbers(i + 2, n);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    printEvenNumbers(2, n);

    return 0;
}