#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    int c = a + b;
    cout << "THe sum is " << c << endl;

    string name;
    cin.ignore();

    cout << "May I know your name ??\n";
    getline(cin, name);
    cout << "Your name is " << name;
    return 0;
}