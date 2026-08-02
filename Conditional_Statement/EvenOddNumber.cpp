#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    if(number % 2 == 0){
        cout<<"This is an even number";
    }
    else{
        cout<<"This is an odd number";
    }
    return 0;
}