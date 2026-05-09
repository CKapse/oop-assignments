#include<iostream>

using namespace std;

#define PI 3.14159265358979323846

class Circle {
private:
    double radius;

public:
    Circle() : radius(0.0) {
        cout << "Circle: Default constructor called." << "\n";
    }

    Circle(double r) : radius(r) {
        cout << "Circle: Parameterized constructor (Radius: " << r << ")." << "\n";
    }

    Circle(const Circle &obj) {
        radius = obj.radius;
        cout << "Circle: Copy constructor called." << "\n";
    }

    ~Circle() {
        cout << "Circle: Destructor called." << "\n";
    }

    double calculateArea() {
        return PI * radius * radius;
    }

    double calculatePerimeter() {
        return 2 * PI * radius;
    }
};

class Rectangle {
private:
    double length, width;

public:
    Rectangle() : length(0.0), width(0.0) {
        cout << "Rectangle: Default constructor called." << "\n";
    }

    Rectangle(double l, double w) : length(l), width(w) {
        cout << "Rectangle: Parameterized constructor (" << l << "x" << w << ")." << "\n";
    }

    Rectangle(const Rectangle &obj) {
        length = obj.length;
        width = obj.width;
        cout << "Rectangle: Copy constructor called." << "\n";
    }

    ~Rectangle() {
        cout << "Rectangle: Destructor called." << "\n";
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    cout << "--- Circle ---" << "\n";
    Circle c1(7.0);          
    Circle c2;               
    Circle c3 = c1;          
    
    cout << "\n--- Rectangle ---" << "\n";
    Rectangle r1(5.0, 10.0); 
    Rectangle r2;             
    Rectangle r3(r1);        

    cout << "\n--- Results ---" << "\n";
    cout << "Circle - 1 Area: " << c1.calculateArea() << "\n";
    cout << "Rectangle - 1 Area: " << r1.calculateArea() << "\n";

    cout << "Circle - 1 Circumference: " << c1.calculatePerimeter() << "\n";
    cout << "Rectangle - 1 Perimeter: " << r1.calculatePerimeter() << "\n";

    return 0;
}

//1. Default Constructor

/*class rectangle {
        private:
            float height;
            float width;

        public:
            rectangle(){
            std::cout<<"Creating rectangle object";
            }
};

int main()
{
    rectangle rect;

    return 0;
}*/

//2. Parameterised Constructor

/*class rectangle {
        private:
            float height;
            float width;

        public:
            rectangle(float h, float w){
                height = h;
                width = w;
            }
};

int main()
{
    rectangle book(10.0, 20.0);
    rectangle box = rectangle(20.0, 30.0);
    rectangle eraser = rectangle(25.0, 35.0);

    return 0;
}*/

//3. Default and Default Parameterised Constructor

/*class rectangle {
private:
    float height;
    float width;

public:
    rectangle(float h = 1.0, float w = 1.0) {
        height = h;
        width = w;
    }
};

int main() {
    rectangle book;
    rectangle box(20.0);
    rectangle eraser(10.0, 20.0);
    rectangle sharperner = rectangle(10);
    rectangle geometry_box = rectangle(50.0, 70.0);
    rectangle paper = rectangle(3.0, 6.0);
    rectangle calculator = rectangle(15.0, 25.0);

    return 0;
}*/

//4. Copy Constructor

/*class rectangle {
private:
    float height;
    float width;

public:
    // Parameterized Constructor
    rectangle(float h, float w) {
        height = h;
        width = w;
    }

    // Copy Constructor
    rectangle(rectangle &p) {
        height = p.height;
        width = p.width;
    }

    // Function to display values (optional, for verification)
    void display() {
        std::cout << "Height: " << height << ", Width: " << width << std::endl;
    }
};

int main() {
    rectangle book_1(10.0, 20.0);

    rectangle book_2(book_1);

    std::cout << "Book 1: ";
    book_1.display();
    std::cout << "Book 2: ";
    book_2.display();

    return 0;
}*/




//DESTRUCTORS

/*class rectangle {
    static int count;
public:
    rectangle() {
        count++;
        cout << "\n Created ObjectId:" << count;
    }

    ~rectangle() {
        cout << "\n Destroyed ObjectId:" << count;
        count--;
    }
};

int rectangle::count = 0;

int main() {
    cout << "\nEnter main";
    
    rectangle a1, a2, a3, a4;

    {
        cout << "\nEnter block 1: ";
        rectangle a5;
    }

    {
        cout << "\nEnter block 2: ";
        rectangle a6;
    }

    cout << "\nRe-enter main: ";
    
    return 0;
}*/


