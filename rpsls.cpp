#include <iostream>
#include <stdlib.h>


int main() {

    srand (time(NULL));
    int computer = (rand() % 3) + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
    
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) 🦎\n";
    std::cout << "5) 🖖\n";
    
    std::cout << "shoot! ";

    std::cin >> user;
    std::cout << "\n";

    if (user == 1) {
        std::cout << "You choose: ✊\n";
    } else if (user == 2) {
        std::cout << "You choose: ✋\n";
    } else if (user == 3) {
        std::cout << "You choose: ✌️\n";
    } else if (user == 4) {
        std::cout << "You choose: 🦎\n";
    } else if (user == 5) {
        std::cout << "You choose: 🖖\n";
    } else {
        std::cout << "Invalid input.\n";
    }

    if (computer == 1) {
        std::cout << "CPU choose: ✊\n";
    } else if (computer == 2) {
        std::cout << "CPU choose: ✋\n";
    } else if (computer == 3) {
        std::cout << "CPU choose: ✌️\n";
    } else if (computer == 4) {
        std::cout << "CPU choose: 🦎\n";
    } else if (computer == 5) {
        std::cout << "CPU choose: 🖖\n";
    } else {
        std::cout << "Invalid input.\n";
    }

    if (user == 1) {
        if (computer == 1) {
            std::cout << "It's a tie!\n";
        } else if (computer == 2) {
            std::cout << "You lose!\n";
        } else if (computer == 3) {
            std::cout << "You win!\n";
        } else if (computer == 4) {
            std::cout << "You win!\n";
        } else if (computer == 5) {
            std::cout << "You lose!\n";
        }
    } else if (user == 2) {
        if (computer == 1) {
            std::cout << "You win!\n";
        } else if (computer == 2) {
            std::cout << "It's a tie!\n";
        } else if (computer == 3) {
            std::cout << "You lose!\n";
        } else if (computer == 4) {
            std::cout << "You lose!\n";
        } else if (computer == 5) {
            std::cout << "You win!\n";
        } 
    } else if (user == 3) {
        if (computer == 1) {
            std::cout << "You lose!\n";
        } else if (computer == 2) {
            std::cout << "You win!\n";
        } else if (computer == 3) {
            std::cout << "It's a tie!\n";
        } else if (computer == 4) {
            std::cout << "You win!\n";
        } else if (computer == 5) {
            std::cout << "You lose!\n";
        }
    } else if (user == 4) {
        if (computer == 1) {
            std::cout << "You lose!\n";
        } else if (computer == 2) {
            std::cout << "You win!\n";
        } else if (computer == 3) {
            std::cout << "You lose!\n";
        } else if (computer == 4) {
            std::cout << "It's a tie!\n";
        } else if (computer == 5) {
            std::cout << "You win!\n";
        }
    } else if (user == 5) {
        if (computer == 1) {
            std::cout << "You win!\n";
        } else if (computer == 2) {
            std::cout << "You lose!\n";
        } else if (computer == 3) {
            std::cout << "You win!\n";
        } else if (computer == 4) {
            std::cout << "You lose!\n";
        } else if (computer == 5) {
            std::cout << "It's a tie!\n";
        }
    }



}