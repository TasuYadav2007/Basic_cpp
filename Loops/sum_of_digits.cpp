#include <iostream>
using namespace std;

int main(){
    int n, digit, sum = 0;

    cout << "Enter number: ";
    cin >> n;

    while (n != 0){
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "The sum of digits of a number is: " << sum;

    return 0;
}