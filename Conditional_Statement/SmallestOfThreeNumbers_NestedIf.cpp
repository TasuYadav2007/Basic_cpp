#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber, thirdNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Enter third number: ";
    cin >> thirdNumber;

    if (firstNumber <= secondNumber){
        if (firstNumber <= thirdNumber){
            cout << firstNumber << " is the smallest";
        }
        else{
            cout << thirdNumber << " is the smallest";
        }
    }
    else{
        if (secondNumber <= thirdNumber){
            cout << secondNumber << " is the smallest";
        }
        else{
            cout << thirdNumber << " is the smallest";
        }
    }

    return 0;
}