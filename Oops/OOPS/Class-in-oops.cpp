#include<iostream>
using namespace std;

class student{
    string name;                        // IF we call the name in outsie the public
    public:
    
    int age;
    bool gender;


    student(){
        cout<<"Default Constructor"<<endl;
    }                                              // No Parameters are being passed while making a object



    student(string s, int a, int g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;                                   
    }                                             // Parameterised Constructor


    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        
        gender = g.gender;
    }




    void setName(string s){
        name = s;
    }

    void getName(){                                // To access the private data members
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;

    }
};

int man(){

    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;                                // To call the name in outsie the public
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);                       // To call the name in outsie the public
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }


    student a("Rahul", 23, 1);
    a.printInfo();                                                    // For Parameterised Cont.
student b;                                                           //For DEfault Constructor
student c = a;                                                       // For Copy Constructor





    return 0;
}