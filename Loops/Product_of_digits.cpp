#include <iostream>
using namespace std;

int main(){
    int n, digit, product = 1;

    cout << "Enter number: ";
    cin >> n;

    while (n != 0){
        digit = n % 10;
        product *= digit;
        n /= 10;
    }
    cout << "The product of digits of a number is: " << product;

    return 0;
}