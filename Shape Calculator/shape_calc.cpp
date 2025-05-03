#include <iostream>
#include <vector>
using namespace std;

void print_menu() {
    std::vector<std::string> shapes = {
        "Exit",
        "Circle",
        "Square",
        "Triangle",
        "Rectangle",
        "Pentagon",
        "Hexagon",
        "Heptagon",
        "Octagon",
        "Nonagon",
        "Decagon",
    };

    for (size_t i = 1; i < shapes.size(); ++i) {
        std::cout << i << ". " << shapes[i] << std::endl;
    }
    std::cout << "0. " << shapes[0] << "\n\n" << std::endl;
}

int main() {
    std::cout<<"Welcome to the Geometry Calculator!\n\n"<<std::endl;

    std::cout<<"Choose a shape:\n"<<std::endl;
    print_menu();

    int selection; 

    std::cout<<"Enter Choice: ";
    std::cin>>selection; 
    
    std::cout<<"Your Choice: "<< selection<<std::endl;
}