#ifndef CARD_H
#define CARD_H

#include <string>

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 6 Question 2
*/

using namespace std;

class Card
{
public:
	Card(int face, int suit);
	string toString() const;

	static const string faces[13];
	static const string suits[4];

private:
	int face;
	int suit;
};

#endif