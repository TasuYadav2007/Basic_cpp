#include <iostream>
using namespace std;

// Function
float convertToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    float result = convertToFahrenheit(celsius);

    cout << "Temperature in Fahrenheit = " << result << endl;

    return 0;
}