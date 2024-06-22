#include <iostream>
using namespace std;
int factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    return number * factorial(number - 1);
}
int main()
{
    int a = 6;
    int num = factorial(a);
    cout << "Factorial :" << a <<" is: " << num;
    return 0;
}