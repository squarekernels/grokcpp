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
}

int main() {
    std::cout<<"Welcome to the Geometry Calculator!\n\n"<<std::endl;

    std::cout<<"Choose a shape:\n"<<std::endl;
    print_menu();

    int selection;

    std::cout<<"Enter Choice: ";
    std::cin>>selection;

    ShapeType choice = static_cast<ShapeType>(selection);

    if (selection == 0) {
        std::cout << "Shutting down..." << std::endl;
        return 0;
    }

    std::cout<<"Your Choice: "<< shapeNames[choice]<<std::endl;
}