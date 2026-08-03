#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber, thirdNumber;

    cout<<"Enter first number: ";
    cin>>firstNumber;

    cout<<"Enter second number: ";
    cin>>secondNumber;

    cout<<"Enter third number: ";
    cin>>thirdNumber;

    if(firstNumber >= secondNumber){
        if(firstNumber >= thirdNumber){
            cout<<firstNumber<<" is the greatest";
        }
        else{
            cout<<thirdNumber<<" is the greatest";
        }
    }
    else{
        if(secondNumber >= thirdNumber){
            cout<<secondNumber<<" is the greatest";
        }
        else{
            cout<<thirdNumber<<" is the greatest";
        }
    }

    return 0;
}