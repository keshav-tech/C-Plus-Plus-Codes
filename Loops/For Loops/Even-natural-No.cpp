#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "\n\n Display n terms of even natural number and their sum:\n";
 
    cin >> n;
    cout << "\n The even numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i << " ";
        sum += 2 * i ;
    }
    cout << "\n The Sum of even Natural Numbers upto " << n << " terms: " << sum << endl;
}
