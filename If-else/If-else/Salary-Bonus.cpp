#include<iostream>
using namespace std;

int main(){

    int salary,years,bonus;
    cin>>salary;
    cout<<"Salary"<<endl;
    cin>>years;
    cout<<"Years of Services"<<endl;

    if(years>5){
        bonus = salary * 5/100;
        cout<<"Net Bonus"<<bonus<<endl;
    }
    else{
        cout<<"Current Salary"<<salary<<endl;
    }





return 0;
}