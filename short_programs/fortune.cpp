#include <iostream>
#include <string> 
#include <vector>


void requestInput(const std::string &prompt, std::string &input) {
    std::cout << prompt; 
    std::getline(std::cin, input);
}

void showMessage(const std::string &message) {
    std::cout << message <<std::endl;
    std::cout << std::endl;
}

void printMessage(const std::string &name, const std::string &adjective, const std::string &noun, const std::string &ending) {
    using std::string_literals::operator""s;
    std::cout<<name + ", "s + adjective + " "s + noun + " that "s + ending<<std::endl;
}

std::string getInfo(const std::string &season) {
    std::string info; 
    if (season == "spring") {
        info = "STL guru";
    } else if (season == "summer") {
        info = "C++ expert";
    } else if (season == "autumn") { 
        info = "coding beast";
    } else if (season == "winter") {
        info = "software design hero";
    } else {
        info = "unknown";
    }

    return info;
}



int main() {
    showMessage("Welcome to the fortune teller program!");


    std::string username, season, adj1, adj2;
    requestInput("Please enter your name: \n", username);
    requestInput("Please enter the time of year when you were born:\n(pick from 'spring', 'summer', 'autumn', 'winter')\n", season);
    requestInput("Please enter an adjective: ", adj1);
    requestInput("Please enter another adjective: ", adj2);

    std::vector<std::string> adjArr = {adj1,adj2};
    size_t adjIdx = username.length() % adjArr.size();

    std::string noun = getInfo(season);
    std::vector<std::string> ending = {"eats UB for breakfast","finds errors quicker than the compiler","is not afraid of C++ error messages"};
    size_t endIdx = username.length() % ending.size();

    printMessage(username, adjArr[adjIdx], noun, ending[endIdx]);

    return 0;
}