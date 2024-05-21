#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[]) {
    std::cout << "Password Generator!" << std::endl;
    std::cout << "Please enter the length of the password: ";
    int length;
    std::cin >> length;

    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));

    std::cout << "Your password is: ";
    for (int i = 0; i < length; i++) {
        // Generate a random number between 0 and 61 (inclusive)
        int randomIndex = std::rand() % 62;

        // Map the random number to a character
        char randomChar;
        if (randomIndex < 10) {
            randomChar = '0' + randomIndex;
        } else if (randomIndex < 36) {
            randomChar = 'A' + (randomIndex - 10);
        } else {
            randomChar = 'a' + (randomIndex - 36);
        }

        std::cout << randomChar;
    }
    std::cout << std::endl;
    return 0;
}