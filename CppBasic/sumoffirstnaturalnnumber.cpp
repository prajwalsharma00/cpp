#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of number upto which you want the sum "
         << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum till" << n << "is " << sum << endl;
    return 0;
}