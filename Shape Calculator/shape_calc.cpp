#include <iostream>

int main() {
    std::cout<<"Welcome to the Geometry Calculator!\n\n"<<std::endl;

    std::cout<<"Choose a shape:\n"<<std::endl;
    std::cout<<"1. Circle"<<std::endl;
    std::cout<<"2. Triangle"<<std::endl;
    std::cout<<"3. Square"<<std::endl;
    std::cout<<"4. Rectangle"<<std::endl;
    std::cout<<"5. Pentagon"<<std::endl;
    std::cout<<"6. Hexagon"<<std::endl;
    std::cout<<"7. Heptagon"<<std::endl;
    std::cout<<"8. Octagon"<<std::endl;
    std::cout<<"9. Nonagon"<<std::endl;
    std::cout<<"10. Decagon"<<std::endl;
    std::cout<<"0. Exit"<<std::endl;

    int selection; 

    std::cout<<"Enter Choice: ";
    std::cin>>selection; 
    
    std::cout<<"Your Choice:"<< selection<<std::endl;
}