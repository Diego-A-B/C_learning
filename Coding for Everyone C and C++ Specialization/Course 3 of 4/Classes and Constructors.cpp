#include <iostream>

class Point {
private:
    double x; // X-coordinate
    double y; // Y-coordinate

public:
    // Constructor
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Method to display the coordinates of the point
    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }

    // Method to set new coordinates for the point
    void setCoordinates(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Method to get the X-coordinate
    double getX() const {
        return x;
    }

    // Method to get the Y-coordinate
    double getY() const {
        return y;
    }
};

int main() {
    // Create a point with coordinates (3.5, 4.5)
    Point p(3.5, 4.5);

    // Display the point
    p.display();

    // Modify the point's coordinates to (1.2, 2.3)
    p.setCoordinates(1.2, 2.3);

    // Display the modified point
    p.display();

    // Get and display individual coordinates
    std::cout << "X-coordinate: " << p.getX() << std::endl;
    std::cout << "Y-coordinate: " << p.getY() << std::endl;

    return 0;
}
