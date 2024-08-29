#include <iostream>

int main()
{

    int score;

    std::cout << "Enter the score: ";
    std::cin >> score;

    char grade;

    if (score >= 90 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 80 && score < 90)
    {
        grade = 'B';
    }
    else if (score >= 70 && score < 80)
    {
        grade = 'C';
    }
    else if (score >= 60 && score < 70)
    {
        grade = 'D';
    }
    else if (score >= 0 && score < 60)
    {
        grade = 'F';
    }
    else
    {
        std::cout << "Invalid score" << std::endl;
        return 1;
    }

    std::cout << "Grade: " << grade << std::endl;

    return 0;
}