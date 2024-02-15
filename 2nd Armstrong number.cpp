#include <iostream>
using namespace std;
int main() 
{
    int num, originalNum, remainder, result = 0;
    std::cout << "Enter a three-digit integer: ";
    std::cin >> num;
    originalNum = num;
    while (originalNum != 0) 
	{
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num)
        std::cout << num << " is an Armstrong number";
    else
        std::cout << num << " is not an Armstrong number";
    return 0;
}
