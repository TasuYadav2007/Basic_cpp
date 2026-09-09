#include <iostream>
using namespace std;

int productOfDigits(int n) {
    int product = 1;

    while (n > 0) {
        int digit = n % 10;
        product = product * digit;
        n = n / 10;
    }

    return product;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = productOfDigits(num);

    cout << "Product = " << result << endl;

    return 0;
}