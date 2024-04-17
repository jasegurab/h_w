// Guess random number
#include <string.h>

#include <cmath>
#include <iostream>

#include "guess.h"

int main(int argc, char* argv[]) {
    int number_of_guesses;

    if (argc == 1) {
        number_of_guesses = 3;
        std::cout << "number_of_guesses= " << number_of_guesses << std::endl;
        run(number_of_guesses);
    } else
        std::cout << "bad input, try again" << std::endl;
    return 0;
}
