#include <iostream>
using namespace std;
int main(){
    float radius, volumn;
    cout<<"Enter Radius of a sphere: ";
    cin>>radius;
    volumn = (4/3) * 3.14 * radius * radius * radius;
    cout<<"Volumn of a sphere is :"<<volumn;
}