#include <iostream>
#include <string> 

void requestInput(const std::string &prompt, std::string &input) {
    std::cout << prompt; 
    std::cin >> input;
}

void showMessage(const std::string &prompt) {
    std::cout << prompt <<std::endl;
}

int main() {
    showMessage("Welcome to the fortune teller program!");


    std::string username;
    requestInput("Please enter your name: ", username);

    std::cout<<username<<std::endl;
    return 0;
}