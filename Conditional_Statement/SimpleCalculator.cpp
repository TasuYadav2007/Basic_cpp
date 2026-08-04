#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    char op;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> secondNumber;

    if (op == '+'){
        cout << firstNumber + secondNumber;
    }
    else if (op == '-'){
        cout << firstNumber - secondNumber;
    }
    else if (op == '*'){
        cout << firstNumber * secondNumber;
    }
    else if (op == '/'){
        if (secondNumber != 0){
            cout << firstNumber / secondNumber;
        }
        else {
            cout << "Division by zero is not allowed";
        }
    }
    else{
        cout << "Invalid operator";
    }
    return 0;
}