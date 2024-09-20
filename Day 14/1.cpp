#include <iostream>
#include <string>

class Car
{
private:
    std::string brandName;
    std::string model;
    std::string engine;
    int numberOfSeats;

public:
    Car(std::string b, std::string m, std::string e, int seats)
        : brandName(b), model(m), engine(e), numberOfSeats(seats) {}

    void displayInfo()
    {
        std::cout << "Brand Name: " << brandName << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Engine: " << engine << std::endl;
        std::cout << "Number of Seats: " << numberOfSeats << std::endl;
    }
};

int main()
{

    Car car1("Toyota", "Corolla", "V6", 5);

    car1.displayInfo();

    return 0;
}