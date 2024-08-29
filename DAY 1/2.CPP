#include <iostream>

int main()
{

    int grade1, grade2, grade3, grade4, grade5;
    int sum;
    double average;

    std::cout << "Enter grade 1: ";
    std::cin >> grade1;

    std::cout << "Enter grade 2: ";
    std::cin >> grade2;

    std::cout << "Enter grade 3: ";
    std::cin >> grade3;

    std::cout << "Enter grade 4: ";
    std::cin >> grade4;

    std::cout << "Enter grade 5: ";
    std::cin >> grade5;

    sum = grade1 + grade2 + grade3 + grade4 + grade5;

    average = static_cast<double>(sum) / 5;

    std::cout << "The average grade is: " << average << std::endl;

    return 0;
}
