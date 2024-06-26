
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <cmath>
#include <iostream>

int random_number() {
    int n;
    srand(time(NULL));
    n = (rand() % 4) + 1;
    return n;
}

int compare_values(int a, int b) {
    if (a == b) {
        std::cout << "correct!" << std::endl;
        return 0;
    } else {
        std::cout << "incorrect!" << std::endl;
        return 1;
    }
}

int input_guess() {
    int guess;
    std::cin >> guess;

    if (std::cin.fail()) {
        std::cin.clear();
        return 0;
    } else if (guess > 5 || guess <= 0) {
        std::cout << "input not valid" << std::endl;
        return 0;
    } else {
        return guess;
    }
}

int run(int number_of_guesses) {
    int i = 0;
    int result;
    int guess;
    int n = random_number();
    while (i < number_of_guesses) {
        std::cout << "Enter a number between 1 and 5" << std::endl;
        guess = input_guess();

        if (guess == 0) {
            return 0;
        }
        result = compare_values(guess, n);
        if (result == 0) {
            return 0;
        }
        std::cout << "guess " << i + 1 << " out of " << number_of_guesses << std::endl;
        i += 1;

        if (i == number_of_guesses) {
            std::cout << "the number was " << n << std::endl;
            return 0;
        }
    }
    return 0;
}
