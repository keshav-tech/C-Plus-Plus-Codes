#include<iostream>
using namespace std;

int main(){

int marks;
cin>>marks;
cout<<"Marks of Student"<<endl;

if(marks<25){
    cout<<"F"<<endl;
    }
    elseif(marks>=25 && marks<45){
        cout<<"E"<<endl;
    }
    elseif(marks>=45 && marks<50){
        cout<<"D"<<endl;
    }
    elseif(marks>=50 && marks<60){
        cout<<"C"<<endl;
    }
    elseif(marks>=60 && marks<80){
        cout<<"B"<<endl;
    }
    else(marks>=80){
        cout<<"A"<<endl;
    }


return 0;
}