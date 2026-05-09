#include <iostream>

class AreaCalculator {
private:
    const double pi = 3.14;

public:
    void showMenu() {
        std::cout << "\nMenu 😋:" << '\n' 
                  << "1. Circle ⚪️" << '\n' 
                  << "2. Rectangle ▬" << '\n' 
                  << "3. Triangle 🔼" << '\n' 
                  << "4. Exit" << '\n';
    }

    void calculateCircleArea() {
        double radius;
        std::cout << "Enter the Radius: ";
        std::cin >> radius;
        std::cout << "Area of the Circle is: " << pi * radius * radius << "\n";
    }

    void calculateRectangleArea() {
        double length, width;
        std::cout << "Enter the Length: ";
        std::cin >> length;
        std::cout << "Enter the Width: ";
        std::cin >> width;
        std::cout << "Area of the Rectangle is: " << length * width << "\n";
    }

    void calculateTriangleArea() {
        double height, base;
        std::cout << "Enter the Height: ";
        std::cin >> height;
        std::cout << "Enter the Base: ";
        std::cin >> base;
        std::cout << "Area of the Triangle is: " << 0.5 * height * base << "\n";
    }
};

int main() {
    AreaCalculator calc;
    int op;

    std::cout << "Welcome to the Area Calculator 😎😎" << "\n";
    calc.showMenu();

    std::cout << "What area do you want?: ";
    std::cin >> op;

    switch (op) {
    case 1:
        calc.calculateCircleArea();  
        break;
    case 2:
        calc.calculateRectangleArea(); 
        break;
    case 3:
        calc.calculateTriangleArea(); 
        break;
    case 4:
        std::cout << "Exiting.........Byeeeeeee 😎✌️";
        break;
    default:
        std::cout << "*****Invalid Dumbo Byee Byeeee*****";
        break;
    }

    return 0;
}