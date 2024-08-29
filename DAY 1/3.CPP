#include <iostream>

int main()
{

    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int square = number * number;

    std::cout << "The square of " << number << " is: " << square << std::endl;

    return 0;
}
