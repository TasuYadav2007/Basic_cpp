#include <iostream>
using namespace std;

// Function
int cube(int num){
    return num * num * num;
}

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = cube(num);

    cout << "Cube = " << result << endl;

    return 0;
}