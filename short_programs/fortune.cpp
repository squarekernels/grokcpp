#include <iostream>
#include <string> 

void requestInput(const std::string &prompt, std::string &input) {
    std::cout << prompt; 
    std::getline(std::cin, input);
}

void showMessage(const std::string &message) {
    std::cout << message <<std::endl;
}

int main() {
    showMessage("Welcome to the fortune teller program!");
    showMessage("");


    std::string username, season, adj1, adj2;
    requestInput("Please enter your name: \n", username);
    requestInput("Please enter the time of year when you were born:\n(pick from 'spring', 'summer', 'autumn', 'winter')\n", season);
    requestInput("Please ennter an adjective: ", adj1);
    requestInput("Please ennter another adjective: ", adj2);



    std::cout<<username<<" the "<<adj1<<" born in "<<season<<" is "<<adj2<<std::endl;
    return 0;
}