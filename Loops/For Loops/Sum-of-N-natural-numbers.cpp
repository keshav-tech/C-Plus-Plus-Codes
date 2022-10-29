#include<iostream>
using namespace std;

int main(){

   int i, sum=0;
   cout<<"N number natural numbers"<<endl;

   for(i=1; i<=7; i++){
       cout<< i << " ";
       sum =  sum + i;
   }
   cout<<"Sum of natural no."<<sum<<endl;

   return 0;
}

