#include "Card.h"

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 6 Question 2
*/

Card::Card(int face, int suit) : face(face), suit(suit) {}


string Card::toString() const
{
	return faces[face] + " of " + suits[suit] ;
}

const string Card::faces[13] = {
	"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"
};

const string Card::suits[4] = {
	"Spade", "Clubs", "Diamond", "Hearts"
};