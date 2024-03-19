// Guess random number
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <cmath>
#include <iostream>

int random_number() {
    int n;
    srand(time(NULL));
    n = (rand() % 5) + 1;
    return n;
}

int run(int number_of_guesses) {
    int i = 0;
    int G = 0;
    int n = random_number();
    while (i < number_of_guesses) {
        int n2 = (rand() % 5) + 1;
        if (n == n2){
            std::cout << "random 1 -> " << n << " random 2 -> " << n2 << " G " << std::endl;
            G=G+1;
        }
        else
            std::cout << "random 1 -> " << n << " random 2 -> " << n2 << " X " << std::endl;
        i += 1;
    }

            std::cout << "G=" << G << " and X=" << number_of_guesses-G << std::endl;
    return 0;
}

int main(int argc, char* argv[]) {
    int number_of_guesses = 100;
    run(number_of_guesses);
}
