#include <iostream>
using namespace std;

int sumOfCubes(int i, int n) {
    if (i > n)
        return 0;

    return i * i * i + sumOfCubes(i + 1, n);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = sumOfCubes(1, n);

    cout << "Sum of cubes = " << result << endl;

    return 0;
}