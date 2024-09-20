#include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    int age;
    double gpa;

public:
    Student(std::string n, int a, double g) : name(n), age(a), gpa(g) {}

    void displayInfo()
    {
        std::cout << "Student Details: " << std::endl;
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Age: " << this->age << std::endl;
        std::cout << "GPA: " << this->gpa << std::endl;
    }
};

int main()
{

    Student student1("Alice", 20, 3.8);

    student1.displayInfo();

    return 0;
}
