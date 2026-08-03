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
    
    if (firstNumber <= secondNumber && firstNumber <= thirdNumber){
        cout << firstNumber << " is smallest number";
    }
    else if (secondNumber <= firstNumber && secondNumber <= thirdNumber){
        cout << secondNumber << " is smallest number";
    }
    else{
        cout << thirdNumber << " is smallest number";
    }
    return 0;
}