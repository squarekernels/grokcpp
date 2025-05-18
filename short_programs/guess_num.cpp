#include <iostream>

void showMessage(const std::string &message) {
    std::cout << message <<std::endl;
}


int main() {

    showMessage("Welcome to the GUESSING GAME!\nI will generate a number and you will guess it!");    
    int smallest, largest; 
    std::cout<<"Please provide the smallest number: "<<std::endl;
    std::cin>>smallest;

    std::cout<<"Please provide the largest number: "<<std::endl;
    std::cin>>largest;



    return 0;
}