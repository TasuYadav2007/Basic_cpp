#include <iostream>
using namespace std;

int convertToMeter(int km) {
    return km * 1000;
}

int main() {
    int km;

    cout << "Enter distance in kilometers: ";
    cin >> km;

    int result = convertToMeter(km);

    cout << "Distance in meters = " << result << endl;

    return 0;
}