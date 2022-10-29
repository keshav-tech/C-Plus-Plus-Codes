#include<iostream>
using namespace std;

int main()
{
    int x,y,z;                                    // These are those char on which we will operate
    cin>>x>>y>>z;                                    // input these char

    if(x>y){                                         //If x is greater than y
        if(x>z){                                     // If x is greater than z
            cout<<x<<endl;                           // print x
        }
        else{                                        //otherwise
            cout<<z<<endl;                           //print z
        }
    }
    else{                                            // otherwise
        if(y>z){                                         // If y is greater than z
            cout<<y<<endl;                                   // print y
        }
        else{                                           // otherwise
            cout<<z<<endl;                            // print z
        }
    } 
    
    return 0;
}


