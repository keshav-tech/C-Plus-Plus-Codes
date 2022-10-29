
// Time Complexity is O of N O(n)
#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){                                 //(iii)
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    
    int n;                                                            
    cin >> n;
    int array[n];                                     

    for(int i=0; i<n; i++){
        cin>>array[i];                                                //(i)
    }

    int key;
    cin>>key;                                                            //(ii)


cout<<linearSearch(array,n,key)<<endl;                                   //(iv)

    
    return 0;
}

