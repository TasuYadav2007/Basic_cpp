#include <iostream>
using namespace std;

int main(){
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100){
        cout << "Invalid marks";
    }
    else if (marks >= 81){
        cout << " Very Good";
    }
    else if (marks >= 61){
        cout << "Good";
    }
    else if (marks >= 41){
        cout << "Average";
    }
    else{
        cout << "Fail";
    }
    return 0;
}