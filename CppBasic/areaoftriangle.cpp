#include <iostream>
using namespace std;
int main()
{
    int height, breadth;
    cout << "Enter the height and breadth for the triangle\n";
    cin >> height >> breadth;
    float value = (height * breadth) / 2.0;
    cout << "The area of the traingle is " << value;
    return 0;
}