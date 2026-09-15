#include <iostream>
using namespace std;

void printMultiplesOf5(int i, int n) {
    if (i > n)
        return;

    cout << i << endl;

    printMultiplesOf5(i + 5, n);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    printMultiplesOf5(5, n);

    return 0;
}