#include <iostream>

int main()
{

    int *dynamicInt = new int;

    *dynamicInt = 42;

    std::cout << "Value of dynamic integer: " << *dynamicInt << std::endl;
    std::cout << "Memory address of dynamic integer: " << dynamicInt << std::endl;

    delete dynamicInt;

    return 0;
}
