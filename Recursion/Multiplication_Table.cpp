#include <iostream>
using namespace std;

void multiplicationTable(int n, int i) {
    if (i > 10)
        return;

    cout << n << " x " << i << " = " << n * i << endl;

    multiplicationTable(n, i + 1);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    multiplicationTable(n, 1);

    return 0;
}