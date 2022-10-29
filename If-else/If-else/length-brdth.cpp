#include<iostream>
using namespace std;

int main(){
    int len, brdth;
    cin>>len;
    cout<<"Length Value"<<endl;

    cin>>brdth;
    cout<<"Breadth value"<<endl;

    if(len==brdth){
        cout<<"This is Square"<<endl;
    }
    else{
        cout<<"This is Rectangle"<<endl;
    }

    return 0;
}