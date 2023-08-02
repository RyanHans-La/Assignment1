#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Player* player1 = new Human("Mei");
    Player* player2 = new Computer();
    Referee referee;
    Player* winner = referee.refGame(player1, player2);
    if (winner == nullptr) {
        std::cout << "It's a Tie" << std::endl;
    }
    else {
        std::cout << winner->getName() << " Wins" << std::endl;
    }
    
    return 0;
}
