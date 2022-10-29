#include<iostream>
using namespace std;

int main(){

    int quantity,price;
    cin>>quantity;
    cout<<"Enter Quantity"<<endl;
    price = quantity*100;
    if(price>1000){
        cout<<"Total Cost is"<<price-(price*.1)<<endl;
    }
    else{
        cout<<"Total Cost is"<<price<<endl;
    }




return 0;
}