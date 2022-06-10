#include <iostream>

#include "Game.h"

int main() {
  while (true) {
    Game game;

    char playAgain;
    std::cout << "Would you like to play again? [y/n]" << std::endl;
    std::cin >> playAgain;

    if (playAgain != 'y') {
      break;
    }
  }

  return 0;
}
