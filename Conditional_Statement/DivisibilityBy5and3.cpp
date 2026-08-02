#include <iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    if(number % 5 == 0 && number % 3 == 0){
        cout<<"The number is divisible by both 5 and 3";
    }
    else{
        cout<<"The number is not divisible by both 5 and 3";
    }
    return 0;
}