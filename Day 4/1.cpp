#include <iostream>
#include <iomanip> 

int main()
{
    int num1, num2;

  
    std::cout << "Enter first integer: ";
    std::cin >> num1;
    std::cout << "Enter second integer: ";
    std::cin >> num2;

   
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;

    
    if (num2 != 0)
    {
        double division = static_cast<double>(num1) / num2;
        int modulus = num1 % num2;

      
        std::cout << "Addition: " << addition << std::endl;
        std::cout << "Subtraction: " << subtraction << std::endl;
        std::cout << "Multiplication: " << multiplication << std::endl;
        std::cout << "Division: " << std::fixed << std::setprecision(5) << division << std::endl;
        std::cout << "Modulus: " << modulus << std::endl;
    }
    else
    {
      
        std::cout << "Division: Undefined (division by zero)" << std::endl;
        std::cout << "Modulus: Undefined (division by zero)" << std::endl;
    }

    return 0;
}
