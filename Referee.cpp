#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    char p1move = player1->makeMove();
    char p2move = player2->makeMove();

    if (p1move == p2move) {
        return nullptr; // tie
    }
    else if ((p1move == 'R' && p2move == 'S') ||
             (p1move == 'S' && p2move == 'P') ||
             (p1move == 'P' && p2move == 'R')) {
        return player1; // player 1 wins
    }
    else {
        return player2; // player 2 wins
    }
}