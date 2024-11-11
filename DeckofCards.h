#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Card.h"
#include <vector>

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 6 Question 2
*/

using namespace std;

class DeckofCards
{
public:
	DeckofCards();
	void shuffle();
	Card dealCard();
	bool moreCards() const;

private:
	vector<Card> deck;
	int currentCard;
};

#endif


