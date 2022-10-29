//Syntax
//<data_type> *name_of_ptr
//int *myIntPointer;
//char *myCharPointer;

// '&' Operator- It gives the address of the variable
// '*' Operator It gives the value stored at the address

#include<iostream>
using namespace std;

int main(){

// int a=10;
// int* aptr=&a;

// cout<<*aptr<<endl;
// *aptr=20;
// cout<<a<<endl;

int arr[]={10,20,30};
cout<<*arr<<endl;

int *ptr=arr;
for(int i=0; i<3; i++){
    // cout<<*ptr<<endl;
    // ptr++;
    cout<<*(arr+i)<<endl;
}

return 0;

}