#include <iostream>
#include "DeckofCards.h"

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 6 Question 2
*/

int main() {
    srand(static_cast<unsigned int>(time(0)));

    DeckofCards deck;
    deck.shuffle();

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        if (deck.moreCards()) {
            Card card = deck.dealCard();
            std::cout << "Dealt card: " << card.toString() << std::endl;
        }
        else {
            std::cout << "No more cards in the deck." << std::endl;
            break;
        }

        std::cout << "Do you want to deal another card? (y/n): ";
        std::cin >> playAgain;
    }

    return 0;
}
