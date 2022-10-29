#include <iostream>
using namespace std;
int main()
{
    int i, sum=0;
    cout << "Find the first 10 natural numbers:";
  
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout <<"Sum Of Natural No." <<sum<<endl;
}