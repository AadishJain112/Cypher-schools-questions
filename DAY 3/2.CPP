#include <iostream>

int main()
{

    int N;
    long long factorial = 1;

    std::cout << "Enter a number: ";
    std::cin >> N;

    if (N < 0)
    {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i)
    {
        factorial *= i;
    }

    std::cout << "The factorial of " << N << " is: " << factorial << std::endl;

    return 0;
}