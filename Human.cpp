#include "Human.h"
#include <iostream>

Human::Human(std::string name) {
    this->name = name;
}

char Human::makeMove() {

    std::cout << "Enter move: ";
    std::cin >> hh;
    return hh;
}

std::string Human::getName() {
    return name;
}
