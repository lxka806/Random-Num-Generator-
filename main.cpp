#include <iostream>

int main() {
    srand(time(NULL));

    int randomNum = (rand() % 10) + 1;
    int usersNum = 0;

    while (randomNum != usersNum) {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> usersNum;
        std::cout << std::endl;

        if (randomNum != usersNum) {
            std::cout << "Try again!" << std::endl;
        }
        else {
            std::cout << "Good job! It was " << randomNum << std::endl;
        }
    }

    return 0;
}
