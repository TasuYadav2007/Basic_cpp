#include <iostream>
using namespace std;
int main(){
    float principle, rate, time, simple_interest;
    cout<<"Enter Principle: ";
    cin>>principle;
    cout<<"Enter Rate: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;
    simple_interest = (principle * rate * time)/100;
    cout<<"The Simple Interest is: "<<simple_interest;

}