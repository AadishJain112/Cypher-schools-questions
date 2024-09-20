#include <iostream>

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    Rectangle(const Rectangle &rect)
    {
        length = rect.length;
        width = rect.width;
    }

    double area() const
    {
        return length * width;
    }

    void displayInfo() const
    {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main()
{

    Rectangle rect1(10.5, 5.5);

    Rectangle rect2 = rect1;

    std::cout << "Original Rectangle:" << std::endl;
    rect1.displayInfo();
    std::cout << "Area: " << rect1.area() << std::endl;

    std::cout << "\nCopied Rectangle:" << std::endl;
    rect2.displayInfo();
    std::cout << "Area: " << rect2.area() << std::endl;

    return 0;
}
