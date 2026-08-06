#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;

    for (int i = number; i <= number * 10; i += number){
        cout << i << " ";
    }
    return 0;
}