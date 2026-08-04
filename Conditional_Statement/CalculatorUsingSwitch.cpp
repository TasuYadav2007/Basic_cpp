#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    char op;

    cin >> firstNumber;
    cin >> op;
    cin >> secondNumber;

    switch (op)
    {
    case '+':
        cout << firstNumber + secondNumber;
        break;

    case '-':
        cout << firstNumber - secondNumber;
        break;

    case '*':
        cout << firstNumber * secondNumber;
        break;

    case '/':
        cout << firstNumber / secondNumber;
        break;

    default:
        cout << "Invalid operator";
    }
    return 0;
}