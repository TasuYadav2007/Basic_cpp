#include <iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter a positive number: ";
    cin>>number;

    if(number >= 100 && number <= 999){
        cout<<"This is a three digit number";
    }
    else{
        cout<<"This is not a three digit number";
    }
    return 0;
}