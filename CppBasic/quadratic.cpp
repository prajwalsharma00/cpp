#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int a, b, c;
    float answer_plus, answer_minus;
    cout << "Enter the value of a,b and c " << endl;
    cin >> a >> b >> c;
    answer_plus = (float)((-b) + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
    answer_minus = (float)((-b) - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
    cout << "The answer are " << answer_minus << answer_plus;
    return 0;
}