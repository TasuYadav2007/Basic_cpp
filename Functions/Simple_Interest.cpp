#include <iostream>
using namespace std;

// Function
float simpleInterest(float p, float r, float t){
    return (p * r * t) / 100;
}

int main(){
    float principal, rate, time;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter rate: ";
    cin >> rate;

    cout << "Enter time: ";
    cin >> time;

    float result = simpleInterest(principal, rate, time);

    cout << "Simple Interest = " << result << endl;

    return 0;
}