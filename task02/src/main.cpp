// Guess random number
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

    if (!std::cin.good()) {
        std::cin.clear();
        return 0;
    }
    if (guess > 5 || guess <= 0) {
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
int test(int number_of_guesses) {
    for (int i = 1; i < 10; i++) {
        int run_test = run(number_of_guesses);
        std::cout << "result " << run_test << std::endl;
    }
    return 0;
}

int main(int argc, char* argv[]) {
    int number_of_guesses = 5;
    /* if (strcmp(argv[1], "test") == 0) {
        std::cout << "this is the test" << std::endl;
        int deb = 1;
        test(number_of_guesses);
        return 0;
    }
    int deb = 0;
    for (int i = 1; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
     } */
    run(number_of_guesses);
}
