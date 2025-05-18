#include <iostream>

void showMessage(const std::string &message) {
    std::cout << message <<std::endl;
    std::cout << std::endl;
}

int main() {

    showMessage("Welcome to the GUESSING GAME!\nI will generate a number and you will guess it!");
    
    
    return 0;
}