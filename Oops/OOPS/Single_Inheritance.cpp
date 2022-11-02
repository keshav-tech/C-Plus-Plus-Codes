#include<iostream>
using namespace std;

class A{
public:
    void func(){
        cout<<"Inheritance";
    }
};


class B : public A{                                             // class B(son) derive from public A(Dad)
};


int main(){
    B b;
    b.func();


    return 0;
}
