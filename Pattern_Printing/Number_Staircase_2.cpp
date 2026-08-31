#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Numbers
        for (int j = i; j <= n; j++) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}