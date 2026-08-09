#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    // Method 1
    // for (int i = 4; i <= 3 * n + 1; i += 3){
    //     cout << i << " ";
    // }

    // Method 2
    int a = 4;
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        a = a + 3;
    }
    return 0;
}