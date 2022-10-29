#include<iostream>
using namespace std;

int main()
{
    // int array[4]={10,20,30,40};

    // cout<<array[3]<<endl;
    
    int n;
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++){                  //this for loop is used for auto input 
        cin>>array[i];
    }

    for(int i=0;i<n;i++){                  //this for loop is used for auto output
        cout<<array[i]<<" ";

    }
 
    return 0;
}

