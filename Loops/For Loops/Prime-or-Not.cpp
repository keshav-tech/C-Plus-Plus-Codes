#include <iostream>
using namespace std;
int main()
{
    int i, num1, ctr = 0;
	cout << " Input a number to check prime or not: ";
	cin>> num1;	
    for (int i = 1; i <= num1; i++) 
    {
        if (num1 % i == 0) 
        {
            ctr++;
        }
    }
    if (ctr == 2) 
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }
}

