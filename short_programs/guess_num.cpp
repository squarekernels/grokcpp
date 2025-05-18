#include <iostream>
#include <random>

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

    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_real_distribution distribution{(float)smallest, (float)largest};

    int generated_random_num = (int)distribution(random_engine);
    showMessage("I've generated a number. Try to guess it!");

    int guess;
    bool guessed = false; 

    int guesses = 0; 
    while (!guessed) {
        std::cout<<"Please provide the next guess: ";
        std::cin>>guess;

        if (guess < generated_random_num) {
            showMessage("Your number is too small. Try again!");
            guesses += 1;
        } else if (guess > generated_random_num) {
            showMessage("Your number is too big. Try again!");
            guesses += 1;
        } else if (guess == generated_random_num) {
            std::cout<<"You've done it! You guessed the number "<<generated_random_num<<"  in "<<guesses<<" guesses!"<<std::endl;
            guessed = true;
        }
    }

    return 0;
}