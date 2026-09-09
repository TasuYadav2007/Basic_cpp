#include <iostream>
using namespace std;

bool isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isVowel(ch)) {
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }

    return 0;
}