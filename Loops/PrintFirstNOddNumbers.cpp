#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 1; i <= 2 * number - 1; i += 2){
        cout << i << " ";
    }
    return 0;
}