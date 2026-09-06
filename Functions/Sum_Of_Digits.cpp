#include <iostream>
using namespace std;


int sumofdigit(int n){
    int sum = 0;
    while(n>0){
        sum = sum + n%10;
        n /= 10;

    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int result = sumofdigit(num);

    cout<<"Sum is: "<<result<<endl;
    return 0;
}