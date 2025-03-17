#include <iostream>
using namespace std;
int main()
{
    int age;
    std::cout << "Enter your age \n";
    std::cin >> age;
    if (cin.fail())
    {
        cout << "Error\n";
    }
    else
    {
        cout << "My age is " << age;
    }

    return 0;
}