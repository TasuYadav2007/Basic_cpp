#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 4; i <= 3 * n + 1; i += 3){
        cout << i << " ";
    }
    return 0;
}