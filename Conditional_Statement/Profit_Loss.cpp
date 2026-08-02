#include <iostream>
using namespace std;

int main(){
    float sellingPrice, costPrice;

    cout<<"Enter selling price: ";
    cin>>sellingPrice;

    cout<<"Enter cost price: ";
    cin>>costPrice;

    if(sellingPrice > costPrice){
        cout<<"Profit is: "<<sellingPrice - costPrice;
    }
    else if(costPrice > sellingPrice){
        cout<<"Loss is: "<<costPrice - sellingPrice;
    }
    else{
        cout<<"No Profit, No Loss";
    }
    return 0;
}