#include <iostream>
int main()
{
    int age;
    std::cout << "Enter your age \n";
    std::cin >> age;
    if (std::cin.fail())
    {
        std::cout << "Error\n";
    }
    else
    {
        std::cout << "My age is " << age;
    }

    return 0;
}