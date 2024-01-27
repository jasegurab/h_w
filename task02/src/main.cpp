// Guess random number
#include <iostream>
#include <stdlib.h>
#include <time.h>

int number (){
  int n;
  srand(time(NULL));
  n = rand() % 5;
  return n;
}

int check(int a, int b){
  if (a == b){
    std::cout << "correct!" <<std::endl;
    return 0;
  }
  else{
    std::cout << "incorrect!" <<std::endl;
    return 1;
  }
}

int run (){
  int i;
  int guess;
  int n=number();

  for (i=0;i<3;i++){
    std::cout << "enter number between 0 and 5" <<std::endl;
    std::cin >> guess;

    if(std::cin.fail()){
      std::cout << "that was not a number" <<std::endl;
      std::cin.clear();
      return 0;
    }
    else {
      std::cout << "using " << guess << " as your guess" << std::endl;}
    check(guess,n);
  }
  std::cout << "the number was " << n << std::endl;
  return 0;
}
int main(int argc, char *argv[]){

  int number_of_guesses=3;
  run();
}
