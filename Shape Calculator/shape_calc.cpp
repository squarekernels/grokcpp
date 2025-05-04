#include <iostream>
#include <vector>
#include <map>

using namespace std;

enum ShapeType {
    CIRCLE = 1,
    SQUARE,
    TRIANGLE,
    RECTANGLE,
    PENTAGON,
    HEXAGON,
    HEPTAGON,
    OCTAGON,
    NONAGON,
    DECAGON,
    POLYGON
};

std::map<ShapeType, std::string> shapeNames = {
    {CIRCLE, "Circle"},
    {SQUARE, "Square"},
    {TRIANGLE, "Triangle"},
    {RECTANGLE, "Rectangle"},
    {PENTAGON, "Pentagon"},
    {HEXAGON, "Hexagon"},
    {HEPTAGON, "Heptagon"},
    {OCTAGON, "Octagon"},
    {NONAGON, "Nonagon"},
    {DECAGON, "Decagon"},
    {POLYGON, "Polygon"},
};

void print_menu() {
    for (const auto& pair : shapeNames) {
        std::cout << static_cast<int>(pair.first) << ". " << pair.second << std::endl;
    }
    std::cout << "0. Exit\n\n" << std::endl;
};

void getCircleInput(double &r) {
    std::cout<<"Enter radius: "<<std::endl;
    std::cin>>r;
};

void getLength(double &l) {
    std::cout<<"Enter length: "<<std::endl;
    std::cin>>l;
}

void getWidth(double &w) {
    std::cout<<"Enter width: "<<std::endl;
    std::cin>>w;
}

void calculateCircle(double &r, double &area, double &circumference) {
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
};

void calculateSquare(double &l, double &area, double &perimeter) {
    area = l * l;
    perimeter = 4 * l;
};

void calculateRectangle(double &l, double &w, double &area, double &perimeter) {
    area = l * w;
    perimeter = 2 * (l + w);
};


void handleCircle() {
    double radius;
    getCircleInput(radius);

    double area, circumference;
    calculateCircle(radius, area, circumference);

    std::cout<<"\n"<<std::endl;
    std::cout<<"Area: "<<area<<std::endl;
    std::cout<<"Circumference: "<<circumference<<std::endl;
};


void handleSquare() {
    double length;
    getLength(length);
    
    double area, perimeter; 
    calculateSquare(length, area, perimeter);

    std::cout<<"\n"<<std::endl;
    std::cout<<"Area: "<<area<<std::endl;
    std::cout<<"Perimeter: "<<perimeter<<std::endl;
}

void handleRectangle() { 
    double length, width;
    getLength(length);
    getWidth(width);

    double area, perimeter;
    calculateRectangle(length, width, area, perimeter);

    std::cout<<"\n"<<std::endl;
    std::cout<<"Area: "<<area<<std::endl;
    std::cout<<"Perimeter: "<<perimeter<<std::endl;
 }

void handleTriangle() { cout << "Triangle handler not yet implemented.\n"; }
void handlePentagon() { cout << "Pentagon handler not yet implemented.\n"; }
void handleHexagon() { cout << "Hexagon handler not yet implemented.\n"; }
void handleHeptagon() { cout << "Heptagon handler not yet implemented.\n"; }
void handleOctagon() { cout << "Octagon handler not yet implemented.\n"; }
void handleNonagon() { cout << "Nonagon handler not yet implemented.\n"; }
void handleDecagon() { cout << "Decagon handler not yet implemented.\n"; }
void handlePolygon() { cout << "Polygon handler not yet implemented.\n"; }

void dispatch_shape(ShapeType shape) {
    if (shape < CIRCLE || shape > POLYGON) {
        std::cout << "Invalid shape selected.\n";
        return;
    }

    switch(shape) {
        case CIRCLE: handleCircle(); break;
        case SQUARE: handleSquare(); break;
        case TRIANGLE: handleTriangle(); break;
        case RECTANGLE: handleRectangle(); break;
        case PENTAGON: handlePentagon(); break;
        case HEXAGON: handleHexagon(); break;
        case HEPTAGON: handleHeptagon(); break;
        case OCTAGON: handleOctagon(); break;
        case NONAGON: handleNonagon(); break;
        case DECAGON: handleDecagon(); break;
        case POLYGON: handlePolygon(); break;
    }
};

int main() {
    std::cout<<"Welcome to the Geometry Calculator!\n"<<std::endl;

     while (true) {
        std::cout<<"\n"<<std::endl;
        std::cout << "Choose a shape:\n";
        print_menu();

        int selection;
        std::cout << "Enter Choice: ";
        std::cin >> selection;

        if (selection == 0) {
            std::cout << "Shutting down...\n";
            break;  // Exits the loop and ends the program
        }

        ShapeType choice = static_cast<ShapeType>(selection);

        std::cout << "Your Choice: " << shapeNames[choice] << "\n\n";

        dispatch_shape(choice);  // Process the selected shape
    }

    return 0;

};

