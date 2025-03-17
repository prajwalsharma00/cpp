#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    std::ifstream file("output.txt");
    if (!file)
    {
        std::cerr << "Error in opening the file \n";
        return 0;
    }
    std::string hello;
    file >> hello;
    std::cout << "THe statment is : " << hello;
    return 0;
}