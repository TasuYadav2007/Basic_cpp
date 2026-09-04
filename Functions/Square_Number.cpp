#include <iostream>
using namespace std;

// Function
int square(int num){
    return num * num;
}

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = square(num);

    cout << "Square: " << result << endl;

    return 0;
}