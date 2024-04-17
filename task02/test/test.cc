#include <stdlib.h>

#include <iostream>

#include "guess.h"
int test(int number_of_guesses) {
    int G = 0;
    int i = 0;
    int n = random_number();
    while (i < number_of_guesses) {
        int n2 = (rand() % 5) + 1;
        if (!compare_values(n, n2)) {
            G = G + 1;
        } else
            i += 1;
    }
    std::cout << "total Guessed = " << G << " and total Wrong = " << number_of_guesses - G << std::endl;
    return 0;
}
int main() {
    int number_of_guesses = 10;
    test(number_of_guesses);
    return 0;
}
