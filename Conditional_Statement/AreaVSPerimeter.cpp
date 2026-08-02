#include <iostream>
using namespace std;

int main(){
    int length, breadth;
    
    cout<<"Enter length of a rectangle: ";
    cin>>length;

    cout<<"Enter breadth of a rectangle: ";
    cin>>breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    if(area > perimeter){
        cout<<"Area of the rectangle is greater";
    }
    else if(perimeter > area){
        cout<<"Perimeter of the rectangle is greater";
    }
    else{
        cout<<"Area and perimeter are equal";
    }
    return 0;
}