// Guess random number
#include <string.h>

#include <cmath>
#include <iostream>

#include "guess.h"
#include "../test/test.h"

#ifdef ENABLE_TEST
int main() {
    int number_of_guesses = 10;
    test(number_of_guesses);
    return 0;
}
#else
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
#endif
