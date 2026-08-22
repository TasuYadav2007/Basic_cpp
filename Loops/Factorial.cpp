#include <iostream>
using namespace std;

int main(){
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    cout << "The factorial of a  given number is: " << factorial;

    return 0;
}