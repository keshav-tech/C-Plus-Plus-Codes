#include<iostream>
using namespace std;

int main(){

int a,b,c;

cin>>a;
cout<<"A"<<endl;

cin>>b;
cout<<"B"<<endl;

cin>>c;
cout<<"C"<<endl;

if((a>b) && (a>c))
{
    cout<<" A is Oldest"<<endl;
}
elseif((b>a) && (b>c)){
    cout<<" B is Oldest "<<endl;
}


else{
    cout<<" C is Oldest"<<endl;
}



return 0;
}