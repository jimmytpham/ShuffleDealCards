#include "DeckofCards.h"
#include <cstdlib>
#include <ctime>

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 6 Question 2
*/

DeckofCards::DeckofCards() {
	currentCard = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			deck.push_back(Card(j, i));
		}
	}
}

void DeckofCards::shuffle()
{
	for (size_t i = 0; i < deck.size(); ++i)
	{
		size_t random = rand() % deck.size();
		swap(deck[i], deck[random]);
	}
}

Card DeckofCards::dealCard()
{
	if (currentCard < deck.size())
	{
		return deck[currentCard++];
	}
	return Card(-1, -1);
}

bool DeckofCards::moreCards() const
{
	return currentCard < deck.size();
}
