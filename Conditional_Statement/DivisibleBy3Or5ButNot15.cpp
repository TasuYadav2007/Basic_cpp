#include <iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    if((number % 5 == 0 || number % 3 == 0) && number % 15 != 0){
        cout<<"The number is divisible by 5 or 3 but not by 15";
    }
    else{
        cout<<"The number does not satisfy the given condition";
    }
    return 0;
}